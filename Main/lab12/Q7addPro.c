#include <stdio.h>

int add(int n1, int n2){
return n1+n2;
}

int mul(int n1, int n2){
return n1*n2;
}

int main(){
	int num1,num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	printf("The sum of the numbers: %d and %d is %d\n",num1,num2,add(num1,num2));
	printf("The product of the numbers: %d and %d is %d",num1,num2,mul(num1,num2));
return 0;
}
