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
	if(FLAG ==0){printf("%d, ",num);}
}

int main(){
	int range;
	printf("Enter the range: ");
	scanf("%d",&range);
	printf("Prime numbers between 0 and %d:\n",range);
	for(int i=1;i<range;i++){
		primeCheck(i);
	}
return 0;
}
