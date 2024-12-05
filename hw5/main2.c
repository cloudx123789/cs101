#include <stdio.h>
#include <math.h>

int main()
{
    double n=1.0;
    double pi=0.0;
    for(int i=1; i<=10; i++)
    {
        pi=pi+(4.0/n*(pow((-1),i-1)));
        n=n+2;
    }
    printf("%.5f",pi);
}




not correct
