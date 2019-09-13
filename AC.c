#include<stdio.h>

int main(){
	long int M,Y;
	int x_2000,x_100,x_50,x_10;
	scanf("%ld %ld",&M,&Y);
	M = M + M*Y/10;
	x_2000 = M/2000;
	int y_2000 = M%2000;
	x_100 = y_2000/100;
	int y_100 = y_2000%100;
	x_50 = y_100/50;
	int y_50 = y_100%50;
	x_10 = y_50/10;
	printf("%d %d %d %d",x_10,x_50,x_100,x_2000);

	return 0;

}
