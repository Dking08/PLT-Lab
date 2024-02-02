#include <stdio.h>

int main(){

int marks;
printf("Enter the marks: ");
scanf("%d",&marks);
char grade;
if(marks/90 >= 1){
	grade = 'O';
	}
else if(marks/80 >= 1){
	grade = 'E';
	}
else if(marks/70 >= 1){
	grade = 'A';
	}
else if(marks/60 >= 1){
	grade = 'B';
	}
else if(marks/50 >= 1){
	grade = 'C';
	}
else if(marks/40 >= 1){
	grade = 'D';
	}
else{
	grade = 'F';
	}
printf("The grade is: %c",grade);
return 0;
}
