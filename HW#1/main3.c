#include <stdio.h>

int main()
{
    char h[100];
    int c=0;
    scanf("%s",h);
    for(int i=0; h[i]!='\0'; i++)
    {
        c=c*2 +(h[i]-'0');
    }   
    printf("%X",c);
}


二進位轉十六進位
Description

設計一個演算法，將輸入進來的 8-bit二進位數字轉換成十六進位數字，並輸出。


Input

使用 scanf() 函式接收輸入。


Output

使用 printf() 函式輸出運算結果
