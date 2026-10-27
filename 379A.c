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
    int t,b;
    scanf("%d %d", &t, &b);
    int total = t;
    while (t>=b)
    {
        total = total + t/b;
        t = (t/b) + (t%b);
    }
    printf("%d", total);
    return 0;
}
//qsort(a, n, sizeof(int), cmp);
