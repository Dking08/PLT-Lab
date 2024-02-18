#include <stdio.h>
int main(){
	int SemGrade[5];
	printf("Enter Grades:\n");
	for (int i=0;i<(sizeof(SemGrade)/sizeof(int));i++ ){
	printf("Subject %d marks is: ",i+1);
	scanf("%d",&SemGrade[i]);
	}
	
	int total=0;
	float avg=0;
	
	for(int i=0;i<5;i++){
		total += SemGrade[i];
	}
	avg = (float)total/5;
	printf("The total is: %d and the average is: %.2f",total,avg);
return 0;
}
