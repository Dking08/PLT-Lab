#include <stdio.h>
int main(){
char grade;
printf("Enter the grade: ");
scanf("%c",&grade);
switch (grade){
	
	case 'A':
	printf("Excellent");
	break;
	case 'B':
	printf("Very Good");
	break;
	case 'C':
	printf("Well done");
	break;
	case 'D':
	printf("You passed");
	break;
	case 'F':
	printf("Try next time");
	break;
	default:
	printf("Invalid grade");

}
return 0;
}
