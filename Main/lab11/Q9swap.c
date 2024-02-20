#include <stdio.h>
int main(){

	printf("Enter the length of the array: ");
	int n;
	scanf("%d",&n);
	int ar1[n],ar2[n], Index=0;
	for(int i=0;i<n;i++){
		printf("Enter %dth number: ",i+1);
		scanf("%d",&ar1[i]);
	}
	for(int i=n-1;i!=-1;i--){
		ar2[Index] = ar1[i];
		Index++;
	}
	for(int i=0; i<n; i++){
		printf("Element %d: %d\n",i+1,ar2[i]);
	}

return 0;
}
