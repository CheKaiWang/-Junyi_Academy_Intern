#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int l=0;
	char str[1000000];
	while(scanf("%s",&str)==1)
	{
		if(l==0) l=1;
		else printf(" ");
		int n=strlen(str);
		for(int j=0;j<n;j++)
			printf("%c",str[n-j-1]);
		memset(str,0,n+1);
	}
	return 0;
}