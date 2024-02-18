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
	printf("Finding duplicates:\n");
	int dup=0;
	for (int i=0;i<n;i++ ){
		for(int j=0;j<n;j++){
			if(ar1[i]==ar1[j] && i!=j){
				dup++;
				break;
			}
		}
	}
	printf("Number of duplicates: %d",dup/2);
return 0;
}
