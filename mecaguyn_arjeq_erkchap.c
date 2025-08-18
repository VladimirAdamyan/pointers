#include<stdio.h>

int main(){
	int index1 = 0;
	int index2 = 0;
	int max = 0;
	const int size1 = 3;
	const int size2 = 3;
	int arr[size1][size2];
	for(int i = 0; i < size1; ++i){
		for(int j = 0; j < size2; ++j){
			scanf("%d", &arr[i][j]);
		}
	}
		
	for(int i = 0; i < size1; ++i){
		for(int j = 0; j < size2; ++j ){
			if(arr[i][j] > max){
				max = arr[i][j];
				index1 = i;
				index2 = j;
			}	
		}
	}
	printf("%d\n", max);
	printf("%d %d\n", index1, index2);
	return 0;
}
