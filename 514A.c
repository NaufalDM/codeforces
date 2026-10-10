#include<stdio.h>
#include<string.h>
#include<math.h>
char x[20];
int main()
{
	scanf("%s", x);
	int panjang = strlen(x);
 	for(int i = 0; i<panjang; i++)
 	{
 		if(i==0 && x[i] == '9')
 		{
 			continue;
		}
 		
 		if(x[i] - '0' >4)
 		{
 			x[i] = '9' - x[i] +'0';
		}
	}
	printf("%s", x);
	return 0;
}