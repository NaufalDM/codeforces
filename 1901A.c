#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,x;
        scanf("%d %d", &n, &x);

        int prev=0, max=0;
        for (int i=0; i<n; i++)
        {
            int a;
            scanf("%d", &a);

            int jarak = a-prev;
            if(jarak>max)
            {
                max = jarak;
            }
            prev = a;
        }
        int last = 2*(x-prev);
        if(last>max)
        {
            max = last;
        }
            printf("%d\n", max);
    }
    return 0;
}