#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, angka;
        scanf("%d", &n);
        int pertama = 0, kedua = 0;
        int awal = 0, akhir = 0;     // flag: apakah pertama / kedua sudah terisi
        int c1 = 0, c2 = 0;          // banyaknya pertama dan kedua
        int benar = 1;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &angka);

            if(awal == 0)                       // nilai pertama
            {
                pertama = angka;
                awal = 1;
                c1 = 1;
                continue;
            }
            if(angka == pertama)                // sama dengan nilai pertama
            {
                c1++;
                continue;
            }
            if(akhir == 0)                      // nilai berbeda pertama kali muncul
            {
                kedua = angka;
                akhir = 1;
                c2 = 1;
                continue;
            }
            if(angka == kedua)                  // sama dengan nilai kedua
            {
                c2++;
                continue;
            }
            benar = 0;                          // nilai ketiga, tanpa break
        }

        if(benar == 1 && akhir == 1 && abs(c1 - c2) > 1)
        {
            benar = 0;                          // dua nilai tapi jumlahnya timpang
        }

        if(benar == 1)
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