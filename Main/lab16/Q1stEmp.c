#include <stdio.h>

struct EmpData {
	int emp_id;
	int age;
	int salary;
};
int main(){
	struct EmpData emp1;
	printf("Enter the Employee ID: ");
	scanf("%d",&emp1.emp_id);
	printf("Enter the Employee Age: ");
	scanf("%d",&emp1.age);
	printf("Enter the Employee Salary: ");
	scanf("%d",&emp1.salary);
return 0;
}
