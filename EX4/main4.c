#include <stdio.h>

int main() 
{
    int i=75012345;
    int a,b,c,d,f;
    if(i<1000)
    {
        d=i%10;
        f=d*1000+(i-d);
        printf("%d",f);
    }
    else
    {
        a=(i%10000)/1000;
        d=i%10;
        c=(i-(a*1000)-d);
        f=c+a+d*1000;
        printf("%d",f);
    }
    return 0;
}
