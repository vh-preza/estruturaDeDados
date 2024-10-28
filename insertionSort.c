#include <stdio.h>

int sort(int a[],int n)
{
    int V = 0, j = 0;

    for(int i=1; i<n; i++)
    {
        V = a[i];

        j = i - 1;
    
    
    while(j>=0 && a[j]>V)
    {
        a[j+1] = a[j];
        j = j - 1;
    }

    a[j+1] = V;
}
}


int main()
{
    int a[5] = {5,3,4,1,2};

    sort(a, 5);

      for(int i=0; i<5;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}