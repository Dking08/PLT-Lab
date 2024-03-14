#include <stdio.h>

int multi10(int n1){
return n1*10;
}

int main(){
	int num1,result;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	result = multi10(num1);
	printf("The result is: %d",result);
return 0;
}
