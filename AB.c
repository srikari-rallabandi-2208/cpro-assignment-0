#include<stdio.h>

int main(){
	long int l1,u1,l2,u2,T;
	scanf("%ld %ld %ld %ld %ld",&l1,&u1,&l2,&u2,&T);
	printf("%0.2lf",((((double)(u2-l2)/(u1-l1))*(T-l1))+l2));

	return 0;
}
