#include <stdio.h>
int main(){
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
int bigger = a>b?a:b;
printf("The bigger number is: %d", bigger);
	return 0;
}
