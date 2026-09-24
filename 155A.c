#include<stdio.h>
int main ()
{
    int n,a,total = 0;
    scanf("%d %d", &n, &a);

    int max = a;
    int min = a;
    while (n>1)
    {
        scanf("%d", &a);
        if (a>max)
        {
            total++;
            max = a;
        }
        else if( a<min)
        {
            total++;
            min = a;
        }
        n--;
    }
    printf("%d", total);
}