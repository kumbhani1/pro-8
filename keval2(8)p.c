
#include<stdio.h>
main()
{
	int a[100];
	int i,n;
	int *p[100];
	

	
	printf ("enter your arry =");
	scanf("%d",&n);
	
	printf("enter elemprintfnts value = ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for (i=0;i<n;i++)
	{
	p[i]=&a[i];
	printf ("enter your arry=%d\n",*p[i]);	
	}
	
	

}


