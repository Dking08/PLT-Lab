#include <stdio.h>
int main(){
	int marks;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	switch(marks/10){
	case 10:
	case 9:
	printf("O grade");
	break;
	case 8:
	printf("E grade");
	break;
	case 7:
	printf("A grade");
	break;
	case 6:
	printf("B grade");
	break;
	case 5:
	printf("C grade");
	break;
	case 4:
	printf("D grade");
	break;
	default:
	printf("F grade");
	break;
	}
return 0;
}
