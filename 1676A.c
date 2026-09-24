#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int kiri = n/1000;
        int kanan = n%1000;
        int sumk = (kiri/100) + (kiri%10) + (kiri/10%10);
        int sumr = (kanan/100) + (kanan%10) + (kanan/10%10);

        if(sumk == sumr)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}