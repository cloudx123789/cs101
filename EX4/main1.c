#include <stdio.h>

int main() 
{
    int n=7;
    for(int i=1;i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(n-j>=i)
            {
                printf(" ");
            }
            else 
            {
                printf("%d ",i);
            }
        }
        printf("\n");
    }

}
