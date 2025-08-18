#include<stdio.h>

int main(){
	int num = 0;
	const int size = 6;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
		if(arr[i] > arr[i + 1]){
			num = num + 1;
		}
	}if(num == 0){
		printf("true\n");
	}else printf("false\n");
	
	return 0;
}
