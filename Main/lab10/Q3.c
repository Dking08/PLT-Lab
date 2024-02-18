#include <stdio.h>
int main(){
	printf("Enter the length of the array: ");
	int n;
	scanf("%d",&n);
	int ar1[n];
	int ar2[n];
	for(int i=0;i<n;i++){
		printf("Enter %dth number: ",i+1);
		scanf("%d",&ar1[i]);
	}
	for(int i=0;i<n;i++){
		ar2[i]=ar1[i];
	}
	for(int j=0;j<n;j++){
		printf("Element %d is %d\n",j,ar2[j]);
	}
return 0;
}
