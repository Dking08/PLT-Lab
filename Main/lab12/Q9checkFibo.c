#include <stdio.h>

int fiboCheck(int num){
int t1=1,t2=1,nT,CFLAG=0,n=1;
	//printf("Fibnonacci series: \n");
	for(int i=1;i<=n;i++){
		if(t1==num || (t1+t2)==num){
			CFLAG=1;
			break;
		}
		nT=t1+t2;
		t1=t2;
		t2=nT;
		(num>t1)?n++:num;
	}
return CFLAG;
}

int main(){
	int num1,result;
	printf("Enter the term: ");
	scanf("%d",&num1);
	printf("The number is in fibonacci series: ");
	result = fiboCheck(num1);
	if(result){
		printf("Yes");
	}
	else{
		printf("No");
	}
return 0;
}
