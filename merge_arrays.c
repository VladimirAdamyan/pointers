#include<stdio.h>

int main(){

	const int size1 = 3;
	const int size2 = 2 * size1;
	int arr1[size1] = {};
	int arr2[size1] = {};
	int arr3[size2] = {};
	for(int i = 0; i < size1; ++i){
		scanf("%d", &arr1[i]);
	}
	 for(int i = 0; i < size1; ++i){
                scanf("%d", &arr2[i]);
        	if(arr1[i] >= arr2[i]){
			arr3[2 * i] = arr2[i];
			arr3[2 * i + 1] = arr1[i];
		}else {arr3[2 * i] = arr1[i];
                        arr3[2 * i + 1] = arr2[i];
	 }
	 }
	for(int i = 0; i < size2; ++i){
		printf("%d", arr3[i]);
	}


	return 0;
}
