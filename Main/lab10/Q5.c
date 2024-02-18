#include <stdio.h>
int main(){
	printf("Enter the length of the array: ");
	int n;
	scanf("%d",&n);
	int ar1[n];
	for(int i=0;i<n;i++){
		printf("Enter %dth number: ",i+1);
		scanf("%d",&ar1[i]);
	}
	printf("Reversed:\n");
	for (int i=n-1;i>=0;i-- ){
	printf("Index %d: %d\n",i,ar1[i]);
	
	}
return 0;
}
