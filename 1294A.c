	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>
	#include <math.h>
	typedef long long ll;
	
	int cmp(const void *a, const void *b)
	{
	    int x = *(int *)a;
	    int y = *(int *)b;
	    return (x < y) - (x > y);
	}
	
	int main()
	{
	    int t;
	    scanf("%d", &t);
	    while (t--)
	    {
	        int a[3];
	        for(int i = 0; i<3;i++)
			{
				scanf("%d", &a[i]);
			}
			qsort(a,3,sizeof(int),cmp);
			int n;
			scanf("%d", &n);
			int seimbang = a[0] - a[1] + a[0] - a[2];
			if((n-seimbang) %3 == 0 && (n-seimbang) >= 0)
			{
				printf("YES\n");
			} 
			else
			{
				printf("NO\n");
			}
		}
	}