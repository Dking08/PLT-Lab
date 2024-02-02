#include <stdio.h>
int main(){
	int num, factors,sum;
	sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	
	int i=1;
	printf("The factors of %d is\n",num);
	while(i<=num/2){
		if(num%i==0){
			sum+=i;
		}
		i++;
	}
	if(sum==num){printf("A perfect number %d",num);}
	
return 0;
}
