#include <stdio.h>

int main()
{
    int t,a,b,i;

    scanf("%d",&t);

    while(t > 0)
    {
        scanf("%d %d",&a, &b);

        i = 0;

        while(a%b!= 0)
        {
            a++;
            i++;
        }

        printf("%d\n",i);

    t--;
    }

return 0;
}
