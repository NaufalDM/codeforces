#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n,k;
    scanf("%d %d", &n,&k);
    int total = 0;
    for(int i = 0; i< n; i++)
    {
    	int anggota;
    	scanf("%d", &anggota);
    	if(anggota + k <=5)
    	{
    		total++;
		}
	}
	printf("%d", total/3);
	return 0;
}
