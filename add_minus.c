#include<stdio.h>

int main(){

	int a = 10;
	int b = 14;
	int *num1 = &a;
	int *num2 = &b;
	printf("%d\n", *num1 + *num2);
	printf("%d\n", *num1 - *num2);

	return 0;
}
