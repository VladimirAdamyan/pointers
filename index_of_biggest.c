#include<stdio.h>

int main(){

	int i = 0;
	int j = 0;
	int arr[6];
	int mec = 0;
	for( ; i < 6; i++){
		scanf("%d", &arr[i]);
		if(arr[i] > mec){
			mec = arr[i];
			j = i;
		}
	}
		printf("%d", j);
	
		return 0;
}
