#include<stdio.h>

main()
{
	
	char ch [100];
	char *p;
	
	int i,n;
	printf ("enter your string value  = ");
	gets(ch);
	
	p = &ch;
	
	printf (" string tenths = %d", strlen(p));
	}
