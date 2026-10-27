#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
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
        int arr[55];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);

        if (n > 1 && arr[0] == arr[n - 1])
        {
            printf("NO\n");
            continue;
        }

        printf("YES\n");
        if (n == 1)
        {
            printf("%d\n", arr[0]);
            continue;
        }

        printf("%d %d", arr[n - 1], arr[0]);   // max, lalu min
        for (int i = 1; i < n - 1; i++)        // sisanya 
        {
            printf(" %d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}