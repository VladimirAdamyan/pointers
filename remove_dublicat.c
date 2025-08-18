#include<stdio.h>

int main(){
	
	const int size = 5;
	int qanak = 0;
	int arr[size] = {};
	int arr1[qanak] = {};
	
	scanf("%d", &arr[0]);
	for(int i = 1; i < size; ++i){
		scanf("%d", &arr[i]);
		
		if(arr[i] == arr[i - 1]){
			arr1[qanak] = arr[i];
			++qanak;
		}	
	}
	
	
	for(int i = 0; i <= qanak; ++i){
		
		
		printf("%d", arr1[i]);
	}
	return 0;
}
