#include<stdio.h>
void prime(int *a){
    int flg=0;
    if(*a<=1) printf("%d ",*a);
    else{
    flg=0;
      for(int i=2;i<=*a/2;i++){ if(*a%i==0) {flg=1; break;}}
      if(flg==0) printf("%d ",*a);
    }
}
int main(){
  int a,b;
  printf("Enter the lower limit: ");
  scanf("%d",&a);
  printf("Enter the upper limit: ");
  scanf("%d",&b);
  printf("Primes\n");
  for(int i=a;i<=b;i++){
     prime(&i);
  }
}
