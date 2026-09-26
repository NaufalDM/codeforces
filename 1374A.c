#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long x,y,n;
        scanf("%lld %lld %lld", &x, &y,&n);

        long long ans = ((n - y) / x) * x + y;
        printf("%lld\n", ans);
    }
}
//k = x * m +y// k yang memunculkan modulo y
// k- y = x * m
// (n-y)/ m = kelipatan x, ddn batas maksimal kelipatan x
// kemudian dikalikan x untuk mendapat nilai kelipatan x sebelum batas, kemudian ditambah y supaya modulo = y