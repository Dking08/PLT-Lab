#include <stdio.h>

int factorial(int n1){
int fact=1;
for(int i=n1;i>1;i--){
	fact*=i;
}	
return fact;
}

int main(){
	int num1,result;
	printf("Enter the number: ");
	scanf("%d",&num1);
	result = factorial(num1);
	printf("The factorial is: %d",result);
return 0;
}
