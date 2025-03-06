#include <stdio.h>

int main()
{
    char a[] = "A4B1C3f3";
    int c=0;
    for(int i=0; i<sizeof(a); i++)
    {
        c=int(a[i+1])-49+1; //數字是字元，要ascii轉成數字
        for(int p=0; p<c; p++)
        {
            printf("%c",a[i]);
        }
        i++;
    }   
}
