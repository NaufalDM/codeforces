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
        char s[105];
        scanf("%s", s);
        int c1 = 0, c2=0;
        for(int i= 0 ; s[i] != '\0'; i++)
        {
        	if(s[i] == '0')
        	{
        		c1++;
			}
			else
			{
				c2++;
			}
		}
		int langkah = c1 <c2 ? c1:c2;
		if(langkah%2 == 1)
		{
			printf("DA\n");
		}
		else
		{
			printf("NET\n");
		}
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
