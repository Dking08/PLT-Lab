#include <stdio.h>
int main(){
	int n,t1=1,t2=1,nT;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Fibnonacci series: \n");
	for(int i=1;i<=n;i++){
		printf("%d ",t1);
		nT=t1+t2;
		t1=t2;
		t2=nT;
	}
return 0;
}
