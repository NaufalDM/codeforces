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
        char s[25];
        char t[25];
        scanf("%s", s);
        scanf("%s",t);
        int hurufs[26] = {0};
        int huruft[26] = {0};
        for(int i = 0; i<n;i++)
        {
        	hurufs[s[i] - 'a']++;
        	huruft[t[i] - 'a']++;
		}
		int urut = 1;
		for(int i = 0;i<26;i++)
		{
			if(hurufs[i] != huruft[i])
			{
				urut = 0;
				break;
			}
		}
		if(urut == 1)
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
//qsort(a, n, sizeof(ll), cmpLL);
// 12  345  4567890 0   