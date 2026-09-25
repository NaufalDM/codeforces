#include <stdio.h>

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    int cost1 = n * a;

    int cost2 = (n / m) * b + (n % m) * a;

    int cost3 = ((n + m - 1) / m) * b;

    int ans = cost1;
    if (cost2 < ans) ans = cost2;
    if (cost3 < ans) ans = cost3;

    printf("%d", ans);

    return 0;
}