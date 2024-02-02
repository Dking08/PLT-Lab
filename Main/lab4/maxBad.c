#include <stdio.h>
int main(){
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
int bigger = a>b?a:(a==b)?0:b;
if(bigger == 0){printf("Same numbers");}
else{printf("The bigger number is: %d", bigger);
	return 0;}
}
