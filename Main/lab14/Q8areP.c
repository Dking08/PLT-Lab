#include <stdio.h>

float Circle(int r, float *peri){

*peri = 3.1415 * r * 2;
return 3.1415 * r * r;

}

int main(){
	int rad;
	float area,peri;
	printf("Enter the radius: ");
	scanf("%d",&rad);
	area = Circle(rad,&peri);
	printf("The area is: %f\n",area);
	printf("The perimeter is: %f",peri);
return 0;
}
