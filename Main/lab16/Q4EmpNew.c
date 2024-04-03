#include <stdio.h>

struct EmpData {
	char grade;
	int basic;
	int allowance;
	int emp_num;
	char name[50];
};
int main(){
	struct EmpData emp1,emp2;
	printf("Enter the Grade: ");
	scanf("%c",&emp1.grade);
	printf("Enter the Employee Basic: ");
	scanf("%d",&emp1.basic);
	printf("Enter the Employee Allowance: ");
	scanf("%d",&emp1.allowance);
	printf("Enter the Employee Number: ");
	scanf("%d",&emp1.emp_num);
	printf("Enter the Employee Name: ");
	gets(emp1.name);
	gets(emp1.name);
	emp2=emp1;
	printf("The Employee Data\nGrade: %c\Basic: %d\Allowance: %d\nEmp_Num: %d\nName: %s",
		emp2.grade,emp2.basic,emp2.allowance,emp2.emp_num,emp2.name);
	
return 0;
}
