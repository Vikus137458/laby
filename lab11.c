#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;
struct book
{
	char nomer[3];
	char pp[30];
	char po[30];
	char vp[5];
	char vo[5];
};

int main()
{
	book x[5];
	int i;
	char s[30];
	printf("Vvedite avtobusy: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%s", &x[i].nomer);
		scanf("%s", &x[i].pp);
		scanf("%s", &x[i].po);
		scanf("%s", &x[i].vp);
		scanf("%s", &x[i].vo);		
	}
	printf("Vvedite punkt pribitia: ");
	scanf("%s", &s);

	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if(strcmp(x[i].pp, s) == 0)
		{
			printf("%s\t", x[i].nomer);
			printf("%s\t", x[i].pp);
			printf("%s\t", x[i].po);
			printf("%s\t", x[i].vp);
			printf("%s\n", x[i].vo);
		}
	}
	return 0;
}
