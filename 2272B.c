#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
    	int n;
    	scanf("%d", &n);
    	char a[200005], b[200005];
	    scanf("%s", a);
	    scanf("%s", b);
	    int total = 0;
	    for(int i = 0; i<n;i++)
	    {
	    	if(a[i] == 'f') total++;
	    	if(b[i] == 'f') total++;
		}
		printf("%d\n", total%2);
	}
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
