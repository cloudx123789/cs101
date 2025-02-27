#include <iostream>

int main()
{
    int i=8;
    int count=0;
    while(i)
    {
        if(i&1==1)
        {
            count++;
        }
        i=i>>1;
    }
    printf("%d", count);
}
