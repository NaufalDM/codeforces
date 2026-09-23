#include <stdio.h>
int main() 
{
    int t;
    scanf("%d", &t);
    while (t>0) 
    {
        int n;
        scanf("%d", &n);

        int a1, a2, a3, x;
        int cmn, ans = 0;

        scanf("%d %d %d", &a1, &a2, &a3);

        if (a1 == a2) 
        {
            cmn = a1;

            if (a3 != cmn)
                ans = 3;
        }
        else if (a1 == a3) 
        {
            cmn = a1;
            ans = 2;
        }
        else 
        {
            cmn = a2;
            ans = 1;
        }

        for (int i = 4; i <= n; i++) 
        {
            scanf("%d", &x);

            if (ans == 0 && x != cmn)
            {
                ans = i;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}