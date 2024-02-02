#include <stdio.h>
#include <math.h>
int main(){
	int num, factors;
	printf("Enter the number: ");
	scanf("%d",&num);
	int i=2;
	int FLAG=0;
	while(i<=sqrt(num)){
		if(num%i==0){
			FLAG = 1;
			break;
		}
		i++;
	}
	if(FLAG == 1){printf("Not a prime number");}
	else if(FLAG ==0){printf("A prime number");}
return 0;
}
