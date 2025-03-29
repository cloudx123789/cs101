#include <bits/stdc++.h>

int main()
{
    FILE* readfile=fopen("lotto.txt", "r");
    FILE* winning=fopen("win.txt", "w");
    char num[40];
    
    while(fgets(num, sizeof(num), readfile)!= NULL)
    {
        if(strstr(num,"02")||strstr(num,"04")||strstr(num,"06"))
        {
            fprintf(winning, "%s", num);
        }
    }
}


大樂透兌獎
Description

設計一個演算法，讀取「lotto.txt」，設定三個中獎號碼，並輸出中獎彩票：

三個中獎號碼為：02、04、06（請直接設定在程式碼內）
以這三個號碼判斷有中獎的彩票，並輸出到「win.txt」
「win.txt」的中獎彩票要依照原來在「lotto.txt」的順序寫入

Input (From File: lotto.txt)

讀取「lotto.txt」的內容。


Output (To File: win.txt)

輸出結果到「win.txt」。
