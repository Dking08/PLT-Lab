#include <stdio.h>

void swap(int n1, int n2){

int temp=n1;
n1=n2;
n2=temp;
printf("Swapped: %d %d",n1,n2);
}

int main(){
	int num1,num2,result;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	swap(num1,num2);
return 0;
}
