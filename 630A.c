#include<stdio.h>
int main()
{
    long long n,sum = 1;
    scanf("%lld", &n);

    for(int i= 1; i<=n; i++)
    {
        sum = sum * 5;
    }

    int digit = sum % 100; 
    printf("25");
}