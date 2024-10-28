#include <iostream>

using namespace std;

void insertion(int a[], int n)
{
    int aux, i, j = 0;

    for(i=1; i<n;i++)
    {
        j = i - 1; 

        aux = a[i];

        while(j>=0 && a[j]>aux)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = aux;  
    }
}

void bubble(int a[], int n)
{
    int aux = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i]<a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

void selection(int a[], int n)
{
    int aux = 0, menor = 0;

    for(int i=0; i<n;i++)
    {
        for(int j = i; j<n; j++)
        {
            if(a[j]<a[menor])
            {
                menor = j;
            }
        }
        aux = a[i];
        a[i] = a[menor];
        a[menor] = aux;
    }
}

int main()
{
    int a[5] = {5,3,4,1,2};

    selection(a, 5);

      for(int i=0; i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}