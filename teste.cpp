#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int * ptr;

    ptr = &n;

    cout<<*ptr<<endl;
}