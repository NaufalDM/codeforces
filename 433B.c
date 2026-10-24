#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
typedef long long ll;
ll v[100005], pv[100005];
ll u[100005], pu[100005];

int cmpLL(const void *a, const void *b)
{
	ll x = *(ll *)a;
	ll y = *(ll *)b;
	return (x>y) - (x<y);	
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n;i++)
    {
    	scanf("%lld", &v[i]);
    	u[i] = v[i];
	}
	
	qsort(u+1, n,sizeof(ll),cmpLL);
	
	for (int i = 1; i <= n; i++)
    {
        pv[i] = pv[i - 1] + v[i];
        pu[i] = pu[i - 1] + u[i];
    }

    int m;
    scanf("%d", &m);
    while (m--)
    {
        int type, l, r;
        scanf("%d %d %d", &type, &l, &r);
        if (type == 1)
            printf("%lld\n", pv[r] - pv[l - 1]);
        else
            printf("%lld\n", pu[r] - pu[l - 1]);
    }
    return 0;
}
