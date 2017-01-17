#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int number();
int main()
{
	number();
	return 0;
}
int number()
{
		int a;
		
		printf("Enter the number : ");
		scanf("%d",&a);
		
		if(a%2==0)
		{
			printf("\nThe number is Even");
		}
		else
		{
			printf("\nThe number is Odd");
		}
 }				
