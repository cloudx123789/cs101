#include <stdio.h>

int main()
{
   int i=159;
   if(i<30)
   {
       printf("30元");
   }
   else if(i>=240)
   {
    printf("240元");
   }
   else
   {
       if(i%30==0)
       {
           printf("%d 元",(i/30)*30);
       }
       else
       {
           printf("%d 元",((i/30)+1)*30 );
       }
   }
}
