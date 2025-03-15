#include <bits/stdc++.h>

int main()
{
    FILE*file_original=fopen("main.c","r");
    FILE*file_copy=fopen("main.txt","w");
    char words[100];
    int count=0;
    
    while(fgets(words, sizeof(words), file_original) != NULL)
    {
        count++;
        if (strstr(words,"int main()")!=NULL)   //用 strstr()字串比較
        {  
            break;
        }
    }
    
    fprintf(file_copy, "%d\n", count);
    
    fclose(file_original);
    fclose(file_copy);
}



讀取主程式在第幾行
Description

設計一個演算法，讀取「main.c」的內容，輸出「int main()」在第幾行。


Input (From File: main.c)

讀取「main.c」的內容。


Output (To File: main.txt)

輸出結果到「main.txt」
