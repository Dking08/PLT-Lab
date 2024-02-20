#include <stdio.h>
int main(){
	printf("Enter the length of the array: ");
	int n;
	scanf("%d",&n);
	int ar1[n],ar2[n];
	for(int i=0;i<n;i++){
		printf("Enter %dth number: ",i+1);
		scanf("%d",&ar1[i]);
	}
	printf("Finding duplicates:\n");
	int dup=0, FDup=0,Din=0;
	for (int i=0;i<n;i++ ){
	FDup=0;
		for(int j=i+1;j<n;j++){
			for(int k=0;k<=i;k++){
				if(ar1[j]==ar2[k]){
					FDup=1;
				}
			}
				if(ar1[i]==ar1[j] && FDup==0){
					dup++;
					ar2[Din]=ar1[i];
					Din++;
				}
		}
	}
	printf("Number of duplicates: %d\n",dup);
	for(int i=0;i<Din;i++){
		printf("Sources: %d\n",ar2[i]);
	}
return 0;
}
