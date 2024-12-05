#include <stdio.h>

int main()
{
   int i=1599;
   if(i<1500)
   {
       printf("70元");
   }
   else
   {
       if((i-1500)%100==0)
       {
           printf("%d 元",(70+(i-1500)/100*10));
       }
       else
       {
           printf("%d 元",((70+(((i-1500)/100)+1)*10)));
       }
   }
}
