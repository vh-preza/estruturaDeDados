#include <iostream>

using namespace std;


void subir(int a[], int i)
{
    int j = i/2;
    int aux;

    if(j>=0)
    {
        if(a[i]>a[j])
        {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;

            subir(a,j);
        }
    }
}

void descer(int a[], int i, int q)
{
    int e = (2 * i) + 1;
    int d = (2 * i) + 2;
    int maior = i;
    int aux;

    if(d<=q && a[d] > a[i])
    {
        maior = d;
    }
    if(e<=q && a[e] > a[maior])
    {
        maior = e;
    }
    if(i!=maior)
    {
        aux = a[i];
        a[i] = a[maior];
        a[maior] = aux;

        descer(a,maior,q);
    }
}

void inserir(int a[],int valor,int *t)
{
    *t = *t + 1;
    a[*t] = valor;
    subir(a,*t);
}

void retirar(int a[], int *q)
{
    a[0] = a[*q];
    *q = *q - 1;
    descer(a,0,*q);
}

void heap(int a[], int t)
{
    int i;
    for(i=(t/2);i>=0;i--);
    descer(a,i,t-1);
}

void heapsort(int a[], int n)
{

    int aux;

    heap(a,n);

    for(int i = n - 1;i>=0;i--)
    {
        aux = a[i];
        a[i] = a[0];
        a[0] = aux;

        descer(a,0,i-1); 
    }
}

int main()
{
    int a[8] = {6,5,8,4,2,1,3,7};

    heapsort(a,8);

    for(int i= 0;i<8;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;   
}