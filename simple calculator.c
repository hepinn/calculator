#include<stdio.h>
main()
{
	int calculator,a,b;
	printf("Enter a operator( case: 1(+), 2(-), 3(*), 4(/), 5(%) ) : \n");
	scanf("%d",&calculator);
	switch(calculator)
	{
		case 1:
		    printf("Enter your value");
		    scanf("%d %d",&a,&b);
		    printf("sum of %d and %d is %d\n",a,b,a+b);
		    break;
		
		case 2:
		    printf("Enter your value");
		    scanf("%d %d",&a,&b);
		    printf("subtract of %d and %d is %d \n",a,b,a-b);
		    break;
		
		case 3:
			printf("Enter your value");
			scanf("%d %d",&a,&b);
			printf("multiply of %d and %d is %d \n",a,b,a*b);
			break;
			
		case 4:
			printf("Enter your value");
			scanf("%d %d",&a,&b);
			printf("divisible of %d and %d is %d \n",a,b,a/b);
			break;
			
		case 5:
			printf("Enter your value");
			scanf("%d %d",&a,&b);
			printf("modulo of %d and %d is %d \n",a,b,a*b/100);
			break;
			
		
		default:
	    	printf("Invalid input");
		    break;
		
		
	}
	
	return 0;
}
