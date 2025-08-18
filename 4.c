#include<stdio.h>

int main(){
	const int size = 6;
	int arr[size] = {};

	for(int i = 0; i < 6; ++i){
		scanf("%d", &arr[i]);
		
	}
	for(int i = 0; i < 6; ++i){
		printf("%d\n", arr[i] / 6);
		
	}

	return 0;
}
