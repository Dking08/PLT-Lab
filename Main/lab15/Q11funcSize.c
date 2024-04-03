#include <stdio.h>
int main(){
int n;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n];
int *ptr = arr;
for( int i= 0; i<n;i++){
        printf("Enter element: ");
        scanf("%d",ptr+i);
}
printf("Size of array: %d", ( (unsigned int) *(&arr+1)- (unsigned int) &arr)/sizeof(int));
//printf("\nERROR: %u %u\n",&arr, *(&arr+1));
for( int i= 0; i<n;i++){
        printf("Element %d: %d\n",i+1,arr[i]);
}
printf("The sum is %d", sum(arr,n));

return 0;
}

int sum(int *Arr){
int size = ((unsigned int) *(&Arr+1)- (unsigned int) &Arr)/sizeof(int);
printf("\nERROR: %u %u\n",&Arr, *(&Arr+1));
int Sum=0;
for(int i=0;i<size;i++){
        Sum += Arr[i];
}
return Sum;
}
