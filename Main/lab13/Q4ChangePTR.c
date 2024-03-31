#include <stdio.h>
int main(){

	int a,*x;
	x=&a;
	printf("Enter the first number: ");
	scanf("%d",x);
	a++;
	printf("The value of a is %d\n",a);
	*x=15;
	printf("The value of a is %d\n",*x);
	printf("The value of a is %d\n",a);
return 0;
}
