#include <stdio.h>
int main(){
	 int Nrow;
	 printf("Enter the number of rows: ");
	 scanf("%d",&Nrow);
	 int icomp,jcomp,min;
	 for(int i=1;i<=(2*Nrow-1);i++){
	 	for(int j=1;j<=(2*Nrow-1);j++){
			icomp = (i>=Nrow)?((i-1)-2*(i-Nrow))%Nrow:(i-1)%Nrow;
			jcomp = (j>=Nrow)?((j-1)-2*(j-Nrow))%Nrow:(j-1)%Nrow;
			min = (icomp>=jcomp)?jcomp:icomp;
			printf("%d ", (Nrow) - min );
		}
		printf("\n");
	 }
return 0;
}
