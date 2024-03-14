#include <stdio.h>

int sumD(int n){
int sum=0;
while(n!=0){
	sum+=n%10;
	n /= 10;
}

return sum;
}

int main(){
	int num1,result;
	printf("Enter the number: ");
	scanf("%d",&num1);
	result = sumD(num1);
	printf("The sum of digits is: %d",result);
return 0;
}
