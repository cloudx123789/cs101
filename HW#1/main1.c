#include <stdio.h>

int main()
{
    char a[100];
    int count=0;
    int i=0;
    scanf("%s",a);
    while(a[i]!='\0')
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




字元編碼
Description

設計一個演算法，檢查輸入進來的字元與其重複的數量，並依照順序輸出。


Input

使用 scanf() 函式接收輸入。


Output

使用printf() 輸出
