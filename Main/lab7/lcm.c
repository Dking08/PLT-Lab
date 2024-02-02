#include <stdio.h>
int main(){
	int a; int b;
	printf("Enter the number a and b: ");
	scanf("%d %d",&a,&b);
	int lcm;
	if(a==b){lcm=a;}
	if( ((a%b==0) || (b%a==0)) && (a!=b)){
		lcm = (a>b)?a:b;
	}
	else if(a!=b){
	lcm=a*b;
	}
	printf("The LCM of %d and %d is %d",a,b,lcm); 
return 0;
}
