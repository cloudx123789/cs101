#include <stdio.h>

int main()
{
    char h[100];
    scanf("%s",h);
    int count=0;
    for(int i=0; h[i]!='\0'; i++)
    {
        count++;
    }
    count=count-1;
    for(int j=count; j>=0; j--)
    {
        printf("%c", h[j]);
    }
}


字串反轉
Description

設計一個演算法，將輸入進來的字串顛倒順序輸出。


Input

使用 scanf() 函式接收輸入。


Output

使用printf()輸出
