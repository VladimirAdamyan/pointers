#include<stdio.h>

int main(){

	int a = 0;
	char b = 0;
	float c = 0;
	scanf("%d", &a);
        scanf(" %c", &b);
        scanf("%f", &c);
	
	int *ptr1 = &a;
	char *ptr2 = &b;
	float *ptr3 = &c;
	

	printf("%p\n%p\n%p",ptr1, ptr2, ptr3);

return 0;
}
