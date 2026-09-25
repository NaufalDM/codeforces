#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int k, count = 0, i = 1;

        scanf("%d", &k);

        while(count < k)
        {
            if(i % 3 != 0 && i % 10 != 3)
            {
                count++;
            }

            i++;
        }

        printf("%d\n", i - 1);
    }

    return 0;
}