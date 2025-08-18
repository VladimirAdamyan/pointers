#include<stdio.h>

int main(){

	int i = 1;
	int j = 2;
	int *ptr1 = &i;
	int *ptr2 = &j;
	if(ptr1 > ptr2){
		printf("little endian");
	}else printf("big endian");

}
