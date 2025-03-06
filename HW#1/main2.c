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



Description

設計一個演算法，根據輸入進來的字元與它後面的數字解碼，並依照順序輸出。

其實就是第一題的相反

Input

使用 scanf() 函式接收輸入。


Output


