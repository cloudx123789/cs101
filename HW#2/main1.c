//#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n][7];
    int count=0;
    int use[70];
    int temp=0;
    srand(1);
    while(count<n)
    {
        for(int i=0; i<7; )
        {
            temp=rand()% 69 +1;   //rand()%(R-L+1)+L
            if(!use[temp])
            {
                num[count][i++]=temp;
                use[temp]=1;
            }
        }
        count++;
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
