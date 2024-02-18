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
	int max=ar1[0];
	for(int i=0;i<n;i++){
		if(max<ar1[i]){
			max =  ar1[i];
		}
	}
	printf("Max number is : %d",max);
return 0;
}
