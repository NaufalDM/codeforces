#include<stdio.h>
int main()
{
	int k,l,m,n,d, i = 1,total = 0;
	scanf("%d %d %d %d %d", &k, &l,&m,&n,&d);
	
	while(i <= d)
	{
    	if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
    	{
        	total++;
   		}

    i++;
	}
	
	printf("%d", total);
	return 0;		
}
