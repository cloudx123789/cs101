#include <stdio.h>

void pyramid(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(n-j==0)
            {
                printf("%d",i);
            }
            else if(n-j>=i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",i);
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int b;
    scanf("%d",&b);
    pyramid(b);
}



Description

設計一個演算法，檢查輸入進來的數字，並依照範例中的結構輸出金字塔。


Input

使用 scanf() 函式接收輸入。


Output

使用printf()
