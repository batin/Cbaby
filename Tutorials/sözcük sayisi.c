#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char M[BUFSIZ];
	int i,j=0;
	gets(M);
	
	for(i=0;i<strlen(M);i++)
	{
		if(M[i]==' ' && M[i+1]!=' ')
		j++;
	}
	if(M[0]==' ')
	printf("%d",j);
	if(M[strlen(M-1)]==' ')
	j--;
	else
	printf("%d",j+1);
}

