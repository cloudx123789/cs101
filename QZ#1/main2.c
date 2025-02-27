#include <iostream>

int main()
{
    int d=574843;
    int f,l;
    l=d%10;
    while(d>10)
    {
        d=d/10;
        f=d;
    }
    printf("%d", f+l);
}
