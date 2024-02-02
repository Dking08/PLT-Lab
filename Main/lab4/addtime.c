#include <stdio.h>
int main(){
int h1,h2,m1,m2,s1,s2;
printf("Enter the first time:");
scanf("%d:%d:%d",&h1,&m1,&s1);
printf("Enter the second time:");
scanf("%d:%d:%d",&h2,&m2,&s2);
if(h1>24||h2>24){
printf("Enter proper time");
return 1;
}
int days,hours,mins,secs;
secs = (s1+s2)%60;
mins = (m1+m2)%60 + (s1+s2)/100;
hours = (h1+h2)%60 + (m1+m2)/100;
days = (hours)/24;
printf("Time: Days:%d\n %d hours,%d minutes,%d seconds", days,hours,mins,secs);
	return 0;
}
