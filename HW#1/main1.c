#include <stdio.h>

int main()
{
    char a[] = "AABBBCCCCddd";
    int count=0;
    int i=0;
    while(i<sizeof(a))
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d",a[i],count+1);
            count=0;
        }
        i++;
    }
}
