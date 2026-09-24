#include<stdio.h>
int main()
{
    int t;
    scanf ("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int ter = n%10;
        int awa = n/10;

        int sum = ter + awa;
        printf ("%d \n", sum);
    }
}