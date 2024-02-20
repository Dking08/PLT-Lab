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
	int peaks[n/2],PIn=0;
	for(int i=0;i<n;i++){
		if(i==0){
			if(ar1[i]>ar1[i+1]){
				peaks[PIn] = ar1[i];
				PIn++;
			}
		}
		else if(i==n){
		if(ar1[i]>ar1[i-1]){
				peaks[PIn] = ar1[i];
				PIn++;
			}
		}
		else{
			if(ar1[i]>ar1[i+1] && ar1[i]>ar1[i-1]){
				peaks[PIn] = ar1[i];
				PIn++;
			}
		}
	}	
	printf("Peaks\n");
	for(int i=0;i<PIn;i++){
		printf("%d ",peaks[i]);
	}

return 0;
}
