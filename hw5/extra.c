#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,c,i,power;
    cin>>n>>i;
    c=i%100;
    power=pow(10,n-2);
    if(c>=(5*power))
    {
        cout<<i+pow(10,n-1);
    }
    else 
    {
        cout<<i;
    }
}
