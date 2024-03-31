#include <stdio.h>
int main(){

	int a,b,*x,*y,sum;
	x=&a;y=&b;
	printf("Enter the first number: ");
	scanf("%d",x);
	printf("Enter the second number: ");
	scanf("%d",y);
	sum = *x+*y;
	a=*x;b=*y;
	printf("The sum of %d and %d is %d",a,b,sum);
return 0;
}
