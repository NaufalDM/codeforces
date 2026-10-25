#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;

int cmpLL(const void *a, const void *b)
{
    ll x = *(ll *)a;
    ll y = *(ll *)b;
    return (x > y) - (x < y);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[105];
        scanf("%s", s);
        int biggest = 0;
        for(int i = 0; i<n;i++)
        {
        	if(s[i] > biggest)
        	{
        		biggest = s[i];
			}
		}
		printf("%d\n", biggest +1 - 'a');
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
