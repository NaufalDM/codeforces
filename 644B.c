//5 1
//2 9 total 11
//4 8 karena baru 0 query di queue, bisa masuk, selesai 19
//10 9 karena query 1 baru selesai di 11 dan maks 1 di queue, skip
//15 2 karena di 11 query 1 selesai, jadi queue kosong dan bisa diisi, selesai 19 + 2
//19 1 di 19 query kedua selesai, bisa masuk dan selesai di 21 +1

#include <stdio.h>

long long selesai[200005];

int main()
{
    int n, b, antri = 0;
    scanf("%d %d", &n, &b);

    int depan = 0;
    int belakang = 0;

    while(n--)
    {
        long long t, d;
        scanf("%lld %lld", &t, &d);

        // Hapus query yang sudah selesai
        while(depan < belakang && selesai[depan] <= t) // jika antrian depan masih ada, dan waktunya kurang dari waktu sekarang
        {
            depan++;
            antri--;
        }

        if(antri < b + 1)
        {
            if(depan == belakang) // jika antrian kosong, karena sudah di clear di while, jadi dipastikan t >= antrian terakhir, jadi pakai t +d
                selesai[belakang] = t + d;
            else // jika masih ada antrian dan antrian masih bisa dimasuki
                selesai[belakang] = selesai[belakang - 1] + d; // pakai antrian terakhir, baru dimasukkan dan selesainya +d

            belakang++;
            antri++;
            printf("%lld\n", selesai[belakang - 1]);// sekarang memilih selesai yang kosong karena belakang sudah ditambah
            // jadinya perlu dikurangi dulu supaya ke antrian terakhir

        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
