#include<stdio.h>

main()
{
	int a,b,c;
	
		printf("enter the value of A :- ");
		scanf("%d",&a);
		
		printf("enter the value of B :- ");
		scanf("%d",&b);
		
		printf("enter the value of C :- ");
		scanf("%d",&c);

		
	(a>b)? (a>c)? printf("A is max"):printf("C is max")
		 :(b>c)? printf("B is max"):printf("C is max");
}