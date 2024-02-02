#include <stdio.h>

int main(){

int num,r,sum;
printf("Enter the number: ");
scanf("%d",&num);
sum=0;
int onum = num;
for(;num!=0;){
	r = num%10;
	sum+=(r*r*r);
	num =num/10;
}
printf("The sum is: %d",sum);

if(sum==onum){
	printf("A armstrong number");
}else{
printf("Not a armstrong number");
}

return 0;
}
