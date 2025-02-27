#include <iostream>

int main()
{
    int j=1;
    for(int i=1; i<=9;)
    {
        printf("%d*%d=%d ",i,j,j*i);
        j++;
        if(j>9)
        {
            j=1;
            i++;
            printf("\n");
        }
    }
}
