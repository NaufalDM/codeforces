#include<stdio.h>
#include<string.h>
int main()
{
	int t, sum =0;
	scanf("%d", &t);
	char a[20] = "Tetrahedron";
	char b[20] = "Cube";
	char c[20] = "Octahedron";
	char d[20] = "Dodecahedron";
	char e[20] = "Icosahedron";

	while(t--)
	{
		char word[20];
		scanf("%s", word);
		if(strcmp(word,a) == 0)
		{
			sum += 4;
		}
		if(strcmp(word,b) == 0)
		{
			sum += 6;
		}
		if(strcmp(word,c) == 0)
		{
			sum += 8;
		}
		if(strcmp(word,d) == 0)
		{
			sum += 12;
		}
		if(strcmp(word,e) == 0)
		{
			sum += 20;
		}
		
	}
	printf("%d", sum);
	return 0;
}
