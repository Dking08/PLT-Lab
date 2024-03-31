#include <stdio.h>
#include <string.h>
int main(){
        char String[50];
        printf("Enter your string: ");
        gets(String);
        char s2[50];
        strcpy(s2,String);
        printf("Entered string is %s",s2);
return 0;
}
