#include <stdio.h>

int main()
{
    int j=1;
    for(int i=1; i<=9;)
    {
        printf("%d*%d=%d\t",i ,j ,i*j);
        j=j+1;
        if (j>9) 
        {
            i++;
            j=1;
            printf("\n");
        }
    }
}



#include <iostream>

int main()
{
    int j=1;
    for(int i=1; i<=10; i++)
    {
        if(i<=9)
        {
            printf("%d*%d=%d\t",j,i,i*j);
        }
        else if(j==9)
        {
            break;
        }
        else if(i==10)
        {
            i=0;
            j=j+1;
            printf("\n");
        }
    }
} 
