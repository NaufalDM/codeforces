#include<stdio.h>
int main()
{
	int n,t,total=0;
	scanf("%d %d" , &n, &t);
	int buku[100005];
	for(int i = 0; i<n; i++)
	{
		scanf("%d", &buku[i]);
	}
	
	int kiri = 0, waktu = 0;
	for(int kanan = 0; kanan<n; kanan++)
	{
		waktu += buku[kanan];
		while(waktu > t)
		{
			waktu -= buku[kiri];
			kiri++;
		}
		if(kanan - kiri+1> total)
		{
			total = kanan - kiri +1;
		}
	}
	
	printf("%d", total);

}
