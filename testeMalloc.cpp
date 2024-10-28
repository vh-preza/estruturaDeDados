#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p;
    int n;
    

    cout<<"escreve a quantidade de entradas: "<<endl;
    cin>>n;

    p = (int*) malloc(n*sizeof(int));

    for(int i = 0; i<n; i++)
    {
        cout<<"escreva o numero "<< i+1<<endl;
        cin>>p[i];
    }

    for(int i = 0; i<n; i++)
    {
        cout<<p[i]<<" na posicao "<<i+1<<endl;
    }
    
    return 0;
}