#include <stdio.h>

void palin(int n){
int r, rev, num;
num =n;
rev=0;
while(num!=0){
	r = num%10;
	rev = rev*10 +r;
	num=num/10;
}
if(n==rev){
	printf("A palindrome\n");
}
printf("The reverse of %d is %d", n,rev);
}

int main(){
	int num1,result;
	printf("Enter the number: ");
	scanf("%d",&num1);
	palin(num1);
return 0;
}
