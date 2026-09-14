#include <stdio.h>
int main ()
{
	int i,n,x,y,z,xn,yn,zn;
	
	scanf("%d", &n);
	scanf ("%d %d %d", &x, &y, &z);
	
	for (i=1;i<n;i++)
	{
		scanf("%d %d %d", &xn, &yn, &zn);
		x=x+xn;
		y=y+yn;
		z=z+zn;
	}	
	if (x==0 && y==0 && z==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
