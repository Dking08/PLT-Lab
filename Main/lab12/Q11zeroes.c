#include <stdio.h>

void Czeroes(int n){
int count=0;
while(n!=0){
	if(n%10==0){
		count++;
	}
	n /= 10;
}
printf("No. of zeroes: %d",count);
}

int main(){
	int num1,result;
	printf("Enter the number: ");
	scanf("%d",&num1);
	Czeroes(num1);
return 0;
}
