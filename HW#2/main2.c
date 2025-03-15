#include <bits/stdc++.h>

int main()
{
    FILE*file_original=fopen("main.c","r");
    FILE*file_copy=fopen("main.txt","w");
    char words[100];
    
    while(fgets(words, sizeof(words), file_original)!= NULL)
    {
        fprintf(file_copy, "%s", words);
    }
    
    fclose(file_original);
    fclose(file_copy);
}




讀取檔案輸出
Description

設計一個演算法，讀取「main.c」的內容，並輸出到「main.txt」。


Input (From File: main.c)

讀取「main.c」的內容。


Output (To File: main.txt)

輸出結果到「main.txt」。
