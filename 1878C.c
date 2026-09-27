#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n,k,x;
        scanf("%lld %lld %lld", &n, &k,&x);

        long long min = k*(k+1) / 2; //gunakan rumus deret aritmatika untuk menemukan jumlahh minimum yang mungkin didapat
        //misalnya k =1 , minimalnya adalah 1, sedangkan k=3 minimalnya adalah 6, jika x dibawah itu, tidak mungkin

        //untuk maksimalnya, ambil k angka terakhir sebelum atau n, misal n =5, maksimalnya adalah jumlah k angka terakhir
        //misal n = 5 dan k = 3, maksimalnya adalah 3 angka terakhir dari 5, yaitu 3,4,5
        //jadi suku pertama dimulai dari 3, atau n-k+1
        // rumus deret aritmatika untuk beda 1 adalah banyak suku(suku ke - n+awal)/2 >> karena suku awal maksimal adalah n-k+1
        //maka rumusnya = k(n+n-k+1)/2
        // atau k(2n-k+1)/2
        long long max = k*(2*n - k +1)/2;

        if( x>= min && x<=max)
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