#include<stdio.h>

int main(){

	const int size = 5;
	int arr[size] = {};
	int *ptr;
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
		for(int i = 0; i < size; ++i){
			ptr =  &arr[i];
			printf("%d\n", *ptr);
		}
return 0;
}
