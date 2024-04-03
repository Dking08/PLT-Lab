#include <stdio.h>
#include <string.h>
struct Student {
	int roll;
	char name[50];
	char gender;
	float marks;
};
int main(){
	struct Student student[2];
	for(int i=0;i<2;i++){
		printf("-----For Student %d-----\n",i+1);
		printf("Enter the Roll Number: ");
		scanf("%d",&student[i].roll);
		printf("Enter the Name: ");
		scanf(" %[^\n]s",student[i].name);
		printf("Enter the gender: ");
		scanf(" %c",&student[i].gender);
		printf("Enter the marks: ");
		scanf("%f",&student[i].marks);
	}
	if( student[0].marks > student[1].marks ){
		printf("%s scored more marks",student[0].name);
	}else { printf("%s scored more marks",student[1].name); }
return 0;
}
