#include <stdio.h>
int main(){
char letter;
printf("Enter the character: ");
scanf("%c",&letter);
if (letter >= 97 && letter <= 129){
	letter -= 32;
	printf("Upper case if %c", letter);
} else if (letter >= 65 && letter <= 90){
	printf("Already uppercase");
}else{printf("Please enter a letter");}

return 0;
}
