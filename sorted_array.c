#include<stdio.h>

int main(){
	int max = 0;
	const int size = 6;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	
	int i = 0;
	int j = size - 1;
	 int sum = 0;

	while(i < j){
		
		max = 0;
		while (i < j){
			if(arr[i] > max){
			max = arr[i];	
			
			}
		++i;	
	}	sum = arr[i] + arr[j];
		arr[j] = max;
		arr[i] = sum - arr[i];
	 	i = 0;
		--j;
	}
	for(int i = 0; i < size; ++i){
		printf("%d\n", arr[i]);
	}
	return 0;
}
