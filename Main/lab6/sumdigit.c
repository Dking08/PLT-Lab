#include <stdio.h>

int main(){

int num,r,sum;
printf("Enter the number: ");
scanf("%d",&num);
sum=0;
while(num!=0){
	r = num%10;
	sum+=r;
	num =num/10;
}
printf("The sum is: %d",sum);
return 0;
}
