#include<stdio.h>
int main()
{
	int room,live,cap;
	scanf("%d",&room);
	int able=0;
	
	while(room>0)
	{
		scanf("%d %d",&live,&cap);
		if(cap-live>=2)
		{
			able++;
		}
	room--;
	}
	
	printf("%d",able);
	return 0;
}
