#include <stdio.h>
int main(){
float bprice,mprice,disc,pro;
printf("Enter the buying price:");
scanf("%f",&bprice);
printf("Enter the market price:");
scanf("%f",&mprice);
printf("Enter the discount:");
scanf("%f",&disc);

mprice = mprice - (mprice * disc)/100;
if( mprice-bprice < 0){
	printf("Seller made a loss of : %f%%", ((bprice-mprice)/bprice)*100);
}
else{
printf("Seller made a profit of : %f%%", ((mprice-bprice)/bprice)*100);
}
return 0;
}
