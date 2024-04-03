#include <stdio.h>
#include <string.h>
struct Student {
	int roll;
	char name[50];
	char gender;
	float marks;
};
int main(){
	int n;
	printf("Enter the numbers of students: ");
	scanf("%d",&n);
	struct Student student[n];
	float AvgMarks = 0;
	for(int i=0;i<n;i++){
		printf("-----For Student %d-----\n",i+1);
		printf("Enter the Roll Number: ");
		scanf("%d",&student[i].roll);
		printf("Enter the Name: ");
		scanf(" %[^\n]s",student[i].name);
		printf("Enter the gender: ");
		scanf(" %c",&student[i].gender);
		printf("Enter the marks: ");
		scanf("%f",&student[i].marks);
		AvgMarks += student[i].marks;
	}
	printf("The average of marks is %.2f",AvgMarks/n);
return 0;
}
