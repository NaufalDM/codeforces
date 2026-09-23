#include<stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
     
    while (t>0)
    {
        int n;
        scanf("%d", &n);
        int ans=0, cur=0;

        for(int i=0; i<n ; i++)
        {
            int a;
            scanf("%d", &a);
            if(a==0)
            {
                cur++;
                if(cur>ans)
                {
                    ans = cur;
                }
            }
            else
            {
                cur=0;
            }
        }
        printf("%d \n",ans);
        t--;
    }
    return 0;

}