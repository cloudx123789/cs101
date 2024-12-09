#include <stdio.h>
#include <math.h>

int main()
{
    float n =1.0;
    double p =0.0;
    int i =0;
    float t=0.000001; 

    while (fabs(p-3.14159)>t)
    {
        p=p+(4.0/n*pow(-1, i));
        n=n+2;
        i=i+1;
    }

    printf("times:%d\n",i);
    printf("Pi:%.5f\n",p);
    return 0;
}

