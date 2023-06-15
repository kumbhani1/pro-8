#include<stdio.h>
 
  swap (int *n1, int *n2)
  {
  	int *temp;
  	temp = *n1;
  	*n1 = *n2;
  	*n2 = temp;
  	 
  	printf (" swaping  value a  = %d\n", *n1);
  	printf (" swaping  value b  = %d\n", *n2);
  	
  	
  }
  
  main()
{
  	int a ,b ;
  	a=23;
  	b=786;
  	swap (&a,&b);
}
