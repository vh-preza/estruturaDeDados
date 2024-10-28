#include <iostream>

using namespace std;

int main()
{
string v = {"victor"};

string n = {"nicolas"};

int res;

res = v.compare(n);

if(res>0)
{
    cout<<v<<endl;
}
else
{
    cout<<n<<endl;
}

    return 0;
}

/*Returns 0 if both the strings are the same.
Returns < 0 (less than zero) if the value of the character of the first string is smaller as compared to the second string input.
Results out to be > 0 (greater than zero) when the second string is greater in comparison.*/