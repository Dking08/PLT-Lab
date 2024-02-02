#include <stdio.h>
int main(){
char letter;
printf("Enter the letter: ");
scanf("%c",&letter);
if (letter>=65 && letter <=90){letter+=32;}
if (letter == 'a' || letter == 'e' ||letter == 'i' ||letter == 'o' ||letter == 'u'){
printf("A vowel");
}
else if( letter<65 || letter >129){
printf("Not a letter");
}else{
printf("A consonent");
}

return 0;
}
