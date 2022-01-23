/* 
* Equipo 5:
 */

#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <string.h>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <ctime>
#define F_1 "MEMORIA VIRTUAL.csv"
#define F_2 "TABLA DE PAGINACION.csv"
#define F_3 "MEMORIA FISICA.csv"

using namespace std;

/*MEMORIA VIRTUAL RESULTADO FINAL
 * PAGINAS:
 * 0
 * 1
 * 2
 * 3
 * 4
 * TABLA DE PAGINAS:
 * PAGINAS || MARCOS:
 *    0    ||   3
 *    1    ||   6
 *    2    ||   5
 *    3    ||   7
 *    4    ||   1
 * MEMORIA FISICA
* MARCOS   || PAGINAS
 *    0    ||   -
 *    1    ||   0
 *    2    ||   -
 *    3    ||   1
 *    4    ||   -
 *    5    ||   2
 *    6    ||   3
 *    7    ||   4
 *    8    ||   -
 * 
 */
int asig_pag[5]={3,6,5,7,1};
int paginas_sus[5]={0,1,2,3,4};
int marcos[]={0,1,2,3,4,5,6,7,8};
char delim=',';
string linea;
void w_memoriav()
{
    ofstream archivo (F_1);
    archivo<<"Paginas:,"<<endl;
    for(int i=0;i<5;i++)
    {
        archivo<<paginas_sus[i]<<","<<endl;
    }
    archivo.close();
}

void w_tabpag(int a[])
{
    ofstream archivo(F_2);
    archivo<<"PAGINAS:,MARCOS:"<<endl;
    for(int i=0;i<5;i++)
    {
        archivo<<paginas_sus[i]<<","<<asig_pag[i]<<endl;
    }
    archivo.close();
}

void w_memoriaf()
{
    ofstream archivo(F_3);
    int x=0;
    archivo<<"MARCOS:,PAGINAS:"<<endl;
    bool b1=false;
    int bigaux[5];
    
   for(int i=0;i<9;i++)
    {
        archivo<<marcos[i]<<",";
         

        for(int a=0;a<5;a++) if(marcos[i]==asig_pag[a]) b1=true;
        if(b1)
        {
            
            archivo<<paginas_sus[x]<<','<<endl;
            x++;
            b1=false;
        }
        else archivo<<"---"<<','<<endl;

    }
    archivo.close();
}
void r_memoriav()
{
    string i[5];
    ifstream archivo(F_1);
    int a=0;
    getline(archivo,linea);
    cout<<"--------------------"<<endl;
    cout<<"\t Total de paginas:"<<endl;
    while(getline(archivo,linea))
    {
        Sleep(500);
        
        ////////////////////////////////
        stringstream stream(linea);
        getline(stream, i[a],delim);

        ////////////////////////////////
        
        cout<<"Pag. #"<<i[a]<<endl;
        a++;
    }
    cout<<"-----------------------------"<<endl<<endl;
    archivo.close();
}
void r_tabpag()
{
    string pag [5];
    string mar [5];
    ifstream archivo(F_2);
    int a=0;
    getline (archivo,linea);
    cout<<"--------------------------------"<<endl;
    cout<<"\t TABLA DE PAGINACION"<<endl;
    cout<<"\tPAGINAS: ||\t MARCOS:"<<endl;
    while(getline(archivo,linea))
    {
        
        ////////////////////////////////
        stringstream stream(linea);
        getline(stream, mar[a],delim);
        getline(stream, pag[a],delim);
        ////////////////////////////////
        a++;

    }
    for(int i=0;i<5;i++)
    {
        Sleep(500);
        cout<<"\t   "<<mar[i]<<"\t||\t   "<<pag[i]<<endl;
    }
    cout<<"---------------------------------"<<endl;
    archivo.close();
}
void r_memoriaf()
{
    string pag[9];
    string marcos[9];
    string x="---";
    ifstream archivo(F_3);
    char *b;
    int a=0;
    getline (archivo,linea);
    cout<<"----------------------------------"<<endl;
    cout<<"\t MEMORIA FISICA:"<<endl;
    cout<<"\t MARCOS: ||\t PAGINAS:"<<endl;
    while(getline(archivo,linea))
    {
        
        ////////////////////////////////
        
        stringstream stream(linea);
        getline(stream, marcos[a],delim);
        getline(stream, pag[a],delim);
        ////////////////////////////////
        a++;
    }
    
    for(int i=0;i<9;i++)
    {
        
        Sleep(500);
        if(strcmp(pag[i].c_str(),x.c_str())!=0) cout<<"\t   "<<marcos[i]<<"\t||\t   "<<pag[i]<<endl;
        else cout<<"\t   "<<marcos[i]<<"\t||\t   "<<'-'<<endl;
    }
    cout<<"-----------------------------"<<endl;
    archivo.close();
}
/*
* TEXTO DIVISORIO
*/
void Prog_princ()
{
    cout<<"*************************************"<<endl;
    cout<<"CREANDO ARCHIVO Y LLENANDO MEMORIA...."<<endl;
    cout<<"*************************************"<<endl;
    w_memoriav();  
    Sleep(1000);
    cout<<endl<<"PRESIONE ENTER PARA CONTINUAR...."<<endl;
    getchar();
    cout<<"************************************"<<endl;
    cout<<"COMENZANDO LECTURA DE ARCHIVO...."<<endl;
    cout<<"************************************"<<endl<<endl;
    Sleep(1000);
    r_memoriav();
    cout<<endl<<"PRESIONE ENTER PARA CONTINUAR...."<<endl;
    getchar();
    cout<<"******************************************"<<endl;
    cout<<"GENERANDO ASIGNACION DE PAGINAS A MARCOS..."<<endl;
    cout<<"******************************************"<<endl<<endl;
    Sleep(1000);
    cout<<endl<<"PRESIONE ENTER PARA CONTINUAR...."<<endl;
    getchar();
    cout<<"**************************************************"<<endl;
    cout<<"CREANDO ARCHIVO Y LLENANDO TABLA DE PAGINAS...."<<endl;
    cout<<"**************************************************"<<endl<<endl;
    w_tabpag(asig_pag);  
    Sleep(1000);
    cout<<endl<<"PRESIONE ENTER PARA CONTINUAR...."<<endl;
    getchar();
    cout<<"********************************************"<<endl;
    cout<<"COMENZANDO LECTURA DE TABLA DE PAGINAS...."<<endl;
    cout<<"********************************************"<<endl<<endl;
    Sleep(500);
    r_tabpag();
    cout<<endl<<"PRESIONE ENTER PARA CONTINUAR...."<<endl;
    getchar();
    cout<<endl<<"************************************************************"<<endl;
    cout<<"CREANDO ARCHIVO Y RELACIONANDO TABLA DE PAGINACION CON MEMORIA FISICA..."<<endl;
    cout<<"************************************************************"<<endl<<endl;
    Sleep(500);
    w_memoriaf();
    cout<<endl<<"PRESIONE ENTER PARA CONTINUAR...."<<endl;
    getchar();
    cout<<"********************************************"<<endl;
    cout<<"COMENZANDO LECTURA DE MEMORIA FISICA...."<<endl;
    cout<<"********************************************"<<endl<<endl;
    Sleep(500);
    r_memoriaf();
    getchar();
    cout<<endl<<"PRESIONE ENTER PARA FINALIZAR...."<<endl;
    cout<<">"; getchar();
}
int main() 
{
    Prog_princ();
    return 0;
}