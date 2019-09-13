#include<stdio.h>

int main(){
	unsigned long int a,b;
	scanf("%lu %lu",&a,&b);
	printf("%lu ",a+b);
	printf("%ld ",a-b);
	printf("%llu ",a*b);
	printf("%lu ",a/b);
	printf("%lu ",a%b);
	printf("%0.10Lf",(long double)a/b);

	return 0;
}
