#include<stdio.h>

int main(){

	char c1 = 0;
	char c2 = 0;
	scanf("%c", &c1);
	scanf("%c", &c2);
	
	char *ptr1 = &c1;
	char *ptr2 = &c2;
	int a = 0;
	int *ptr4 = &a;
	*ptr1 = *ptr4 + 1;
	*ptr2 = *ptr4 + 2;
	
	printf("%d", a);

	return 0;
}
