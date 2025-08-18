#include<stdio.h>

int main(){

	const int size = 5;
	char arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf(" %c", &arr[i]);
	}
	for(int i = 0; i < size; ++i){
		printf("%c", arr[i]-32);
	}



	return 0;
}
