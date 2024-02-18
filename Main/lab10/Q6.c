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
	printf("Odd numbes are:\n");
	for (int i=0;i<(sizeof(ar1)/sizeof(int));i++ ){
	if(ar1[i]%2!=0){
	printf("Index %d: %d\n",i+1,ar1[i]);
	}
	}
return 0;
}
