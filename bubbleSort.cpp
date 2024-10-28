#include <iostream>

using namespace std;

void sort(int a[], int n)
{
    int aux = 0;
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if( a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}


int main()
{
    int a[5];

    cout<<"insira os valores da array\n";
    cin>> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    
    sort(a, 5);

    for(int i=0; i<5;i++)
    {
        cout<<a[i]<< endl;
    }

    return 0;
}