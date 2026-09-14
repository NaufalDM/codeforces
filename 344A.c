#include <stdio.h>

int main()
{
    int n, grup = 1;
    char a, b,a_seb,b_seb;

    scanf("%d", &n);

    scanf(" %c%c", &a_seb, &b_seb);

	while(n>1)
    {
        scanf(" %c%c", &a, &b);

        if (a != a_seb || b != b_seb)
        {
            grup++;
        }

        a_seb = a;
        b_seb = b;
        n--;
    }

    printf("%d", grup);

    return 0;
}
