#include <iostream>

using namespace std;

void troca(int *x, int *y)
{
    int aux;

    aux= *x;

    *x = *y;

    *y = aux;
}


void quickSort(int arr[],int inicio, int fim)
{
    int i, j, aux;

    if((fim-inicio)< 2)
    {
        if((fim-inicio) == 1)
        {
            if(arr[inicio]>arr[fim])
            {
                troca(&arr[inicio],&arr[fim]);
            }
        }
    }
    else
    {
        i = inicio;
        j = fim;
        aux = arr[inicio];

        while(j>i)
        {
            i++;
            
            while(arr[i]< aux)
            {
                i++;
            }
            while(arr[j] > aux)
            {
                j--;
            }

            if(j>i)
            {
                troca(&arr[i], &arr[j]);
            }
        }
        troca(&arr[inicio], &arr[j]);
        quickSort(arr, inicio, j-1);
        quickSort(arr, j+1, fim);
    }
}



int main()
{
    int arr[10] = {3,7,1,2,10,4,5,9};

    quickSort(arr, 0, 7);

    for(int i=0; i<8;i++)
    {
        cout<<arr[i]<<endl;  
    }

}