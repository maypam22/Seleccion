#include <iostream>
using namespace std;
#define TAM 5
void ingresar(int a[],int n);
void ordenar(int a[],int n);
void imprimir(int a[],int n);


int main()
{
    int arreglo1[TAM];
    cout<<"Ingresar los elementos al arreglo:"<<endl;
    ingresar(arreglo1,5);
    cout<<"Elementos no ordenados"<<endl;
    imprimir(arreglo1,5);
    cout<<endl;
    ordenar(arreglo1,5);
    cout<<"Elementos ordenados"<<endl;
    imprimir(arreglo1,5);
    return 0;
}





void ingresar(int a[],int n)
{
    int i;
    for (i=0 ; i<n; i++ )
    {
        cin>>a[i];
    }
}


void ordenar(int a[],int n)
{
    int i,j,aux;
       for (i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
               aux = a[i];
               a[i]=a[j];
               a[j]=aux;
            }

        }
    }
}

void imprimir(int a[],int n)
{
    int i;
         for (i=0 ; i<n; i++ )
    {
        cout<<"["<<a[i]<<"]";
    }
}