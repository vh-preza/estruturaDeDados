#include <iostream>

using namespace std;

void insertion(int arr[], int n)
{
    int aux, j = 0;

    for(int i = 1; i<n; i++)    // não é necessario escolher o maior elemento da array a cada ciclo como no selection Sort // 
    {
        aux = arr[i];

        j = i - 1;

        while(j>=0 && arr[j]>aux)    // while é necessário apenas se o elemento for menor que o que está atrás //
        {
            arr[j+1] = arr[j];            
            j--;
        }

        arr[j+1] = aux;     // não é necessario trocar elemento por elemento como no bubbleSort //
    }                       
}

