#include <stdio.h>

int max(int n1, int n2){
int max = n1;
if (max<n2){
max=n2;
}

return max;
}

int main(){
	int num1,num2,result;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	result = max(num1,num2);
	printf("The max number is: %d",result);
return 0;
}
