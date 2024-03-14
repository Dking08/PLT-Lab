#include <stdio.h>

int fiboN(int n){
int t1=1,t2=1,nT;
	//printf("Fibnonacci series: \n");
	for(int i=1;i<n;i++){
		nT=t1+t2;
		t1=t2;
		t2=nT;
	}
return t1;
}

int main(){
	int num1,result;
	printf("Enter the term: ");
	scanf("%d",&num1);
	result = fiboN(num1);
	printf("The value of %dth term is: %d",num1,result);
return 0;
}
