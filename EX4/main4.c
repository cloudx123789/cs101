#include <stdio.h>

int main()
{
    int num=12345;
    int ten_digits,hundred_digits,unit_digit,temp,after,thousand_digits,ten_thousand_digits;
    if(num<=1000)
    {
        if(num/100>0)
        {
            hundred_digits=num/100;
            temp=num%100;
            ten_digits=temp/10;
            unit_digit=temp%10;
            after=1000*unit_digit+100*hundred_digits+10*ten_digits;
            printf("%d",after);
        }
        else if (num/10>0)
        {
            ten_digits=num/10;
            unit_digit=num%10;
            after=1000*unit_digit+10*ten_digits;
            printf("%d",after);
        }
        else
        {
            unit_digit=num;
            after=1000*unit_digit;
            printf("%d",after);
        }
    }
    else
    {
        ten_thousand_digits=num/10000;
        temp=num%10000;
        thousand_digits=temp/1000;
        temp=temp%1000;
        hundred_digits=temp/100;
        temp=temp%100;
        ten_digits=temp/10;
        unit_digit=temp%10;
        after=10000*ten_thousand_digits+1000*unit_digit+100*hundred_digits+10*ten_digits+thousand_digits;
        printf("%d",after);
    }
