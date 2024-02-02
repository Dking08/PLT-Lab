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
			//printf("A factor is %d\n",i);
			sum+=i;
		}
		i++;
	}
	//printf("A factor is %d\n",num);
	//sum+=num;
	if(sum==num){printf("A perfect number %d",num);}
	
return 0;
}
