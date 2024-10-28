#include <iostream>

using namespace std;

int recursividade(int n)
{
    int carlos = 0;

    if(n>1)
    {
    
     carlos = n * recursividade(n-1);

    }
    else
    {
        carlos = n;
    }

    return carlos;
}

int main()
{
    int n, resultado;

    cout<<"escreva o fatorial\n";
    
    cin>>n;

    resultado = recursividade(n);

    cout<<resultado;

    return 0;

}






