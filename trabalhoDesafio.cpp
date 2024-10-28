#include <iostream>

using namespace std;

void insertion(int arr[], int n)
{
    int aux, j = 0;

    for(int i = n; i<0; i--) 
    {
        aux = arr[i];

        j = i + 1;

        while(j<=0 && arr[j]<aux) 
        {
            arr[j-1] = arr[j];            
            j++;
        }

        arr[j-1] = aux; 
    }                   
}       

int main()
{
    int a[5] = {5,3,4,1,2};

        insertion(a, 5);

      for(int i=0; i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}