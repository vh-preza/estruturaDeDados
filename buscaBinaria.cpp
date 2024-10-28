#include <iostream>
#define k 10

using namespace std;

int buscaBinaria(int arr[], int inicio,int fim, int busca)
{
    int meio;

    meio = (fim+inicio)/2;

    if(fim>inicio)
    {
        if(busca==meio)
        {
            return 0;
        }
        else if(busca>meio)
        {
            return buscaBinaria(arr,meio+1,fim,busca);
        }
        else 

            return buscaBinaria(arr,inicio,meio-1,busca);
    }
    return -1;
}

void insertionSort(int arr[],int n)
{
    int i, j, aux;

    for(i=1;i<n;i++)
    {
        j = i - 1;

        aux = arr[i];

        while(j>=0 && arr[j]>aux)
        {
            arr[j+1] = arr[j];

            j = j - 1;
        }
        
        arr[j+1] = aux;
    }
}

int main()
{
    int arr[10] = {20,3,2,4,5,15,17,8,9,1};
    int busca, result;
    
    cout<<"insira o numero procurado"<<endl;
    cin>>busca;

    insertionSort(arr,k);

    result = buscaBinaria(arr, 0, k-1, busca);

    if(result==0)
    {
        cout<<"item achado!!!!"<<endl;
    }

    else
    {
        cout<<"intem nao encontrado...."<<endl;
    }

    return 0;
}
