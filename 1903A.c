#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n,k;
		scanf("%d %d", &n, &k);
			int angka[105];
			for(int i = 0; i< n; i++)
			{
				scanf("%d", &angka[i]);
		    }
		if(k>=2)
		{
			printf("YES\n");
		}
		else
		{
		    int aman = 1;
		    for(int i = 0; i< n-1; i++)
		    {
		    	if(angka[i] > angka[i+1])
		    	{
		    		aman = 0; 
		    		break;
				}
			}
			if(aman ==1)
			{
				printf("YES\n");
			}
			else 
			{
				printf("NO\n");
			}
		}
	}
}
