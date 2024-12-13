#include <stdio.h>

int main() 
{
    int flag=1;
    long long int ipi=0;
    int n=1;
    double pi=0;
    for(int i=1; i<1000000; i++)
    {
        ipi=pi*100000;
        if(ipi==314159)
        {
            break;
        }
        else if(flag==1)
        {
            pi=pi+(4.0/n);
            n=n+2;
            flag=0;
        }
        else if(flag==0)
        {
            pi=pi-(4.0/n);
            n=n+2;
            flag=1;
        }
    }
    printf("%d",n);
}
