#include <stdio.h>

int main(){

int num,r,sum,fact,onum;
printf("Enter the number: ");
scanf("%d",&num);
sum=0;
onum=num;
for(;num!=0;){
fact=1;
	r = num%10;
	for(int k=r;k!=1;k--){
		fact*=k;
	}
	sum+=fact;
	num =num/10;
}
if(onum==sum){
printf("%d is a strong number",sum);
}else{
printf("Not a strong number");}
return 0;
}
