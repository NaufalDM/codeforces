#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;


int cmpLL(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;
	return (x>y) - (x<y);
}
int cmpLR(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;
	return (x<y) - (x>y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n,k;
    	int a[40];
    	int b[40];
    	scanf("%d %d", &n, &k);
    	for(int i = 0; i< n; i++)
    	{
    		scanf("%d", &a[i]);
		}
		qsort(a, n,sizeof(int), cmpLL);
		for(int i = 0; i<n;i++)
		{
			scanf("%d", &b[i]);
		}
		qsort(b,n,sizeof(int), cmpLR);
		
		for(int i = 0; i< k;i++)
		{
			if(a[i]<b[i])
			{
				a[i] = b[i];
			}
		}
		
		int total = 0;
		for(int i = 0; i<n;i++)
		{
			total+= a[i];
		}
		
		printf("%d\n", total);
	}
    return 0;
}
