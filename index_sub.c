#include<stdio.h>

int main(){
	int k = 0;
	int j = 0;
	int mec = 0;
	int poqr = 99999;
	const int size = 5;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
		if(arr[i] > mec){
			mec = arr[i];
			j = i;
		}
		
		if(arr[i] < poqr){
			poqr = arr[i];
			k = i;
		}	
	}
	printf("%d", j - k);

	
	return 0;
}
