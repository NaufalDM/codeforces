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
        char s[200005];
        int pref[200005];
        int huruf[26] = {0};
        int jl = 0;
        scanf("%s", s);
        
        for(int i = 0; i<n;i++)
        {
        	if(huruf[s[i] -'a'] == 0)
        	{
        		huruf[s[i] -'a'] = 1;
        		jl++;
			}
			pref[i] = jl;
		}
		
		int huruf2[26] = {0};
		int suf = 0,terbaik = 0;
		for(int i = n-1; i>=1;i--)
		{
			if(huruf2[s[i] - 'a'] == 0)
			{
				huruf2[s[i] - 'a'] = 1;
				suf++;
			}
			
			int value = pref[i-1] +suf;
			if(value>terbaik)
			{
				terbaik = value;
			}
		}
		
        
		
		printf("%d\n", terbaik);
    }
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
