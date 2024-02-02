#include <stdio.h>
int main(){
int r, rev, num, onum;
printf("Enter the number: ");
scanf("%d",&onum);
num =onum;
rev=0;
while(num!=0){
	r = num%10;
	rev = rev*10 +r;
	num=num/10;
}
if(onum==rev){
	printf("A palindrome\n");
}
printf("The reverse of %d is %d", onum,rev);
return 0;
}
