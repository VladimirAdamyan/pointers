#include<stdio.h>

int main(){
	
	const int size = 6;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);

	}
	int i = 0;
	int j = size - 1;
	while(i <= j){
		int sum = arr[i] + arr[j];
		if(arr[i] % 2 == 0){
			++i;
		}else {arr[i] = sum - arr[i];
			arr[j] = sum - arr[i];	
		--j;}
	}
	for(int i = 0 ; i < size; ++i){
		printf("%d\n", arr[i]);
	}
	return 0;
}
