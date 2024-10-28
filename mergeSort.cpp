#include <iostream>

using namespace std;

void intercalar(int arr[],int inicio,int fim,int meio)
{
    int i, aux[5] = {0}, posLivre = inicio, inicioA1 = inicio,  inicioA2 = meio + 1;

    while(inicioA1 <= meio && inicioA2 <= fim) 
    {
        if( arr[inicioA1] > arr[inicioA2] )
        {
            aux[posLivre] = arr[inicioA2];
            inicioA2++;
        }
        else
        {
            aux[posLivre] = arr[inicioA1];
            inicioA1++;
        }
        posLivre++;
    }

    for ( i = inicioA1; i<= meio; i++)
    {
        aux[posLivre] = arr[i];
        posLivre++;
    }

    for(i = inicioA2; i<= fim; i++)
    {
        aux[posLivre] = arr[i];
        posLivre++;
    }

    for(i=inicio;i<=fim; i++)
    {
        arr[i] = aux[i];
    }

}

void mergeSort(int arr[],int inicio,int fim)
{

    int meio = (inicio+fim) / 2;

    if(inicio<fim)
    {
        mergeSort(arr, inicio, meio);
        mergeSort(arr,meio+1, fim);
        intercalar(arr, inicio,fim,meio);
    }
}

int main()
{
    int arr[5] = {5,2,1,3,4};

    mergeSort(arr, 0, 4);

    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

}