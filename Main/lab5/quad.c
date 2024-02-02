#include <stdio.h>
#include <math.h>
int main(){
float a,b,c;
printf("Enter the coefficients a,b,c: ");
scanf("%f %f %f",&a,&b,&c);
float D = (b*b) - 4*(a*c);
if (D==0){
float root = (sqrt( (double) D)-b)/2*a;
printf("Same real roots\n");
printf("Roots are: %f and %f", root,root);
}
else if(D>0){
float root1,root2;
root1 = (sqrt( (double) D)-b)/2*a;
root2 = (-sqrt( (double) D)-b)/2*a;
printf("real roots\n");
printf("Roots are %f and %f", root1,root2);
}
else if (D<0){
float rC, rR;
rR = (-b)/(2*a);
rC = (sqrt( (double) -D))/(2*a);
printf("Complex roots\n");
printf("Root1 = %f + %fi\n",rR,rC);
printf("Root1 = %f - %fi",rR,rC);
}
return 0;
}
