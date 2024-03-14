#include <stdio.h>
#include <math.h>
void primeCheck(int num){
int factors;
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
}

int main(){
	int num1;
	printf("Enter the number: ");
	scanf("%d",&num1);
	primeCheck(num1);
return 0;
}
