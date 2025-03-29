#include <bits/stdc++.h>

void replace_all(char* str, char oldChar, char newChar)
{
    char* ptr=str;
    for(int i=0; i<=strlen(str); i++)
    {
        if(*ptr==oldChar)
        {
            *ptr=newChar;
            
        }
        ptr++;
    }
}

int main()
{
    char str[100];
    char oldChar='a';
    char newChar='A';
    scanf("%s", str);
    replace_all(str, oldChar, newChar);
    printf("%s", str);
}


Description

設計一個演算法，將輸入字串中的「a」替換成「A」，並輸出更新後的字串：

實作「replace_all」函式，透過指標傳遞字元陣列
#include <stdio.h>
void replace_all(char* str, char oldChar, char newChar){??}

int main(){
    char str[100], oldChar = 'a', newChar = 'A';
    scanf("%s", str);

    replace_all(str, oldChar, newChar);
    printf("%s", str)

    return 0;
}

Input

使用 scanf() 函式接收輸入。


Output

使用 printf() 函式輸出運算結果。


