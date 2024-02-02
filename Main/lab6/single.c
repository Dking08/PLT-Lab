#include <stdio.h>

int main(){

int num,r,sum;
printf("Enter the number: ");
scanf("%d",&num);
while(num/10!=0){
sum=0;
while(num!=0){
	r = num%10;
	sum+=r;
	num=num/10;
}
num=sum;
printf("The sum is: %d\n",sum);
}
printf("The sum is: %d",sum);
return 0;
}
