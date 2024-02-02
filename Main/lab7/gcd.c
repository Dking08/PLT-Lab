#include <stdio.h>
int main(){
	int a; int b;
	printf("Enter the number a and b: ");
	scanf("%d %d",&a,&b);
	int m = a;
	int n = b;
	while(a!=b){
		if(b>a){ b=b-a; }
		else{ a=a-b; }
	}
	int gcd = b;
	printf("The GCD is %d",gcd); 
return 0;
}
