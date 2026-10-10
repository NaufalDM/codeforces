	#include<stdio.h>
	#include<math.h>
	
	int main()
	{
		int n,m;
		scanf("%d %d", &n, &m);
		
		int akar = n < m ? n : m;
		if(akar %2 == 0)
		{
			printf("Malvika");
		}
		else
		{
			printf("Akshat");
		}
	}