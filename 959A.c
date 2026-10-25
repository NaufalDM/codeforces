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
    if(t%2==1) printf("Ehab");
    else printf("Mahmoud");
    return 0;
}
//qsort(a, n, sizeof(ll), cmpLL);
