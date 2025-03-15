//#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][7];
    int temp=0;
    srand(1);
    for(int i=0; i<n; i++)
    {
        int use[70]={0};
        for(int j=0; j<7; )
        {
            temp=(rand()%69)+1;   //rand()%(R-L+1)+L
            if(use[temp]==0)
            {
                num[i][j]=temp;
                use[temp]=1;
                j++;
            }
        }
        printf("\n");
    }
    
    FILE*fp = fopen("lotto.txt", "w+");
    
    int c=0;
    fprintf(fp, "========= lotto649 =========");
    fprintf(fp, "\n");
    for(int a=0; a<5; a++)
    {
        fprintf(fp, "[%d]:",a+1);
        for(int b=0; b<7; b++)
        {
            if(c>=n)
            {
                fprintf(fp, " __");
            } 
            else
            {
                fprintf(fp, " %02d", num[c][b]);
            }
        }
        c++;
        fprintf(fp, "\n");
    }
    fprintf(fp, "========= csie@CGU =========");
    
    fclose(fp);
}




Description

設計一個演算法，輸入一個數字 N，產生 N 組七個不重複數字的樂透號碼，並輸出到「lotto.txt」。

數字 N 範圍 1-5
樂透號碼是每組七個不重複的數字，範圍 1-69，不用排序
使用隨機函數 srand(1)

Input (From File: scanf)

使用 scanf() 函式接收輸入。


Output (To File: lotto.txt)

使用 fprintf() 函式輸出運算結果到「lotto.txt」
