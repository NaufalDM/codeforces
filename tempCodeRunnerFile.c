#include<stdio.h>
int main()
{
    long long n, sum=0;
    scanf("%lld", &n);

    while(n>0)
    {
        if(n>=100)
        {
            sum = sum + n/100;
            n%=100;
        }
        else if(n>=20)
        {
            sum = sum + n/20;
            n%=20;
        }
        else if(n>=10)
        {
            sum = sum + n/10;
            n%=10;
        }
        else if(n>=5)
        {
            sum = sum + n/5;
            n%=5;
        }
        else if(n>=1)
        {
            sum = sum + n/1;
            n%=1;
        }
    }
    printf("%lld", sum);
    return 0;
}