#include<stdio.h>

int main(){
	int i = 0;
	int arr[5]; 
	int mec = 0;
	for( ; i < 6; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > mec){
			mec = arr[i];
		}
	}
		printf("%d", mec);
	return 0;
}
