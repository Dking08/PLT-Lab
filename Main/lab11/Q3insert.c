#include <stdio.h>
int main(){
	printf("Enter the length of the array: ");
	int n;
	scanf("%d",&n);
	int ar1[n];
	int ar2[n+1];
	for(int i=0;i<n;i++){
		printf("Enter %dth number: ",i+1);
		scanf("%d",&ar1[i]);
	}
	int Eins,Epos;
	printf("Enter the element to insert: ");
	scanf("%d",&Eins);
	printf("Enter the postion to insert: ");
	scanf("%d",&Epos);
	int FINS=0;
	printf("New array:\n");
	for (int i=0;i<n;i++ ){
	if(i==Epos-1){
		ar2[i]=Eins;
		FINS=1;	
	}
	ar2[i+FINS]=ar1[i];
	}
	for (int i=0;i<(sizeof(ar2)/sizeof(int));i++ ){
	printf("Index %d: %d\n",i+1,ar2[i]);
	
	}
	
return 0;
}
