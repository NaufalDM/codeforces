#include<stdio.h>
int main()
{
	int tahun,lanjut,satuan,puluhan,ratusan,ribuan;
	scanf("%d",&tahun);
	lanjut=tahun+1;
	
	while(1)
	{
		satuan=lanjut%10;
		puluhan=(lanjut%100)/10;
		ratusan=(lanjut%1000)/100;
		ribuan=lanjut/1000;
		
		if (lanjut>tahun && (satuan!=puluhan&&satuan!=ribuan&&satuan!=ratusan&&puluhan!=ratusan&&puluhan!=ribuan&&ratusan!=ribuan))
		{
			printf("%d",lanjut);
			break;
		}
		lanjut++;
	}	
	
	return 0;
}
