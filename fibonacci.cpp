#include <iostream>

using namespace std;

int fibonnaci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else

    return fibonnaci(n-1) + fibonnaci(n-2);
}

int main()
{
    int n=0;

    cout<<"insira um valor"<<endl;
    cin>>n;
    cout<<"/////////////"<<endl;

    for(int i = 0; i<=n; i++)
    {
        cout<<fibonnaci(i)<<endl;
    }
}