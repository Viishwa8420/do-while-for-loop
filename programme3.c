//A Program to print even numbers from 1 to N using a do-while loop.
#include<stdio.h>
main()
{
	int n, i=1;
	
	printf("Enter value for n : ");
	scanf("%d",&n);
	
	do{
		if(	i % 2 == 0)
		{	
			printf("%d \n",i);
		}
			i++;
	  }
		while(i<=n);
}

