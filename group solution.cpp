/*when writing more than program in the same source file, the variables should be declared globally.
This means that they should be declared before the main() function*/
#include <stdio.h>
int i;
int x=-10;
int main()
{     
	printf("VALUES 1 to 20 ARE:\n");
	for (i=1;i<=20;i++)
	{      
		printf("%d\n",i);
	}
	printf("EVEN NUMBERS FROM -10 to 10 INCLUSIVE:\n");
	
	while(1) 
	{
	printf("%d\n", x); x+=2;
	if (x>=11)
	break;
	
}
printf("spokoci@gmail.com");
	
	
	return 0;
}