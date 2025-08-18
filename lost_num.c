#include<stdio.h>

int main(){
	int num = 0;
	const int size = 5;
        int arr[size] = {};
	int sum = 0;
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
		sum = sum +arr[i];
	} 	     
	
	int i = 0;
	num = (arr[i] + arr[size - 1]) * (size + 1) / 2;
	printf("%d", num - sum);
	return 0;
}
