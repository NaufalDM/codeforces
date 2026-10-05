#include<stdio.h>
int main()
{
	int s,n;
	scanf("%d %d", &s, &n);
	int x[1005], y[1005];
	
	for(int i = 0 ; i<n ; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for(int i = 0; i<n-1 ; i++)
	{
		for(int j = 0; j<n-1-i ; j++)
		{
			if(x[j] > x[j+1])
			{
				int temp = x[j]; 
				x[j] = x[j+1];
				x[j+1] = temp;
				
				temp = y[j];
				y[j] = y[j+1];
				y[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i< n; i++)
	{
		if(s<= x[i])
		{
			printf("NO");
			return 0;
		}
		s += y[i];
	}
	printf("YES");
}
