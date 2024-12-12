#include <stdio.h>

int main()
{
    int n=1;
    int i=1;
    for(int t=1; t<=10; t++)
    {
        if(t<10)
        {
            printf("%d*%d=%d ",i,n,i*n);
            n=n+1;
        }
        else if (i==9)
        {
            break;
        }
        else if(t==10)
        {
            printf("\n");
            t=0;
            n=1;
            i=i+1;
        }
    }
}
