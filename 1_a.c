#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[1000000];
	scanf("%s",&str);
	int n=strlen(str);
	for(int j=0;j<n;j++)
		printf("%c",str[n-j-1]);
	return 0;
}