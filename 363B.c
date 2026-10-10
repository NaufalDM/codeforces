#include<stdio.h>
#include<string.h>
#include<math.h>

int angka[200000];
int main()
{
    int n , k;
    scanf("%d %d", &n, &k);
    for(int i = 1; i<=n; i++)
    {
    	scanf("%d", &angka[i]);
	}
    int total = 0;
    for(int i = 1; i <= k; i++)
    {
    	total += angka[i];
	}
	
	int terkecil = total;
	int poster = 1;
	
	for(int i = 2; i<= n-k+1; i++)
	{
		total = total + angka[i+k-1] - angka[i-1];
		if(total < terkecil)
		{
			terkecil = total;
			poster = i;
		}
	}
	
	printf("%d", poster);
	return 0;
}
