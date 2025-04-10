#include <stdio.h>

void towerofhanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if(n==1)
    {
        printf("\n Move dixk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerofhanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move dixk %d from rod %c to rod %c",n , from_rod, to_rod);
    towerofhanoi(n-1, from_rod, aux_rod, to_rod);
}
int main()
{
    int n=3;
    towerofhanoi(n, 'A', 'B', 'C');
}
