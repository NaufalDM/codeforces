#include<stdio.h>
int main()
{
	int k,l,m;
	scanf("%d %d %d", &k, &l, &m);
	
	if(k<l)
	{
		int temp = k;
		k = l;
		l = temp;
	}
	if(l<m)
	{
		int temp = l;
		l = m;
		m = temp;
	}
	if(k<l)
	{
		int temp = k;
		k = l;
		l = temp;
	}
	
	int jarak = k-m;
	printf("%d", jarak);
}
