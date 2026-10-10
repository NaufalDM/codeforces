#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
 	int t;
 	scanf("%d", &t);
 	while(t--)
 	{
 		long long n, k;
        scanf("%lld %lld", &n, &k);
        printf("%lld\n", k + (k - 1) / (n - 1));
	}
	return 0;
}
