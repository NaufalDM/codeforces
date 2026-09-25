#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        int dua = 0 , tiga = 0, duas;

        while(n%2==0)
        {
            n/=2;
            dua++;
        }
        while(n%3==0)
        {
            n/=3;
            tiga++;
        }

        if(n!=1 || dua>tiga)// jika angka memiliki faktor selain dua dan tiga, dan jika faktor dua lebih banyak dari 3, tidak bisa dibagi 6 terus
        {
            printf("-1 \n");
            continue;
        }

        if(tiga>dua)
        {
            duas = tiga - dua;
        }
        else if(tiga == dua)
        {
            printf("%d \n", tiga);
            continue;
        }

        printf("%d \n", duas + tiga);
    
    }
}