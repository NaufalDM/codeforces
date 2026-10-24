#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        static char s[200005];
        scanf("%s", s);
        int n = strlen(s);

        int c0 = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0') c0++;
            else c1++;
        }

        int i;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (c1 > 0) c1--;
                else break;
            }
            else
            {
                if (c0 > 0) c0--;
                else break;
            }
        }

        printf("%d\n", n - i);
    }
    return 0;
}