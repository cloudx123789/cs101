#include <iostream>

int main()
{
    int d=1540;
    int c;
    if(d<=1500)
    {
        printf("70元\n");
    }
    else if ((d-1500)%100==0)
    {
        c=70+(((d-1500)/100)*10);
        printf("%d 元\n",c);
    }
    else if((d-1500)%100>0)
    {
        c=70+((((d-1500)/100)+1)*10);
        printf("%d 元\n",c);
    }
}
