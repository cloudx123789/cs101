#include <stdio.h>
#include <math.h>

int main()
{
    int n =1;
    double p =0.0;
    int i =0;

    while(i<1000000)
    {
        p=p+(4.0/n*pow(-1, i));
        n=n+2;
        i=i+1;
        long int ip=p*100000;
        if(ip==314159)
        {
            break;   
        }
    }

    printf("times:%d\n",n);
    printf("Pi:%.5f\n",p);
    return 0;
}
