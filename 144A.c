#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    scanf("%d", &a);

    int max = a, min = a;
    int posMax = 0, posMin = 0;

    for (int i = 1; i < n; i++) {
        scanf("%d", &a);

        if (a > max) {
            max = a;
            posMax = i;
        }

        if (a <= min) {
            min = a;
            posMin = i;
        }
    }

    int ans = posMax + (n - 1 - posMin);

    if (posMax > posMin)
        ans--;

    printf("%d", ans);

    return 0;
}