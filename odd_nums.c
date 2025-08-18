#include<stdio.h>

int main(){
	int qanak = 0;
	const int size = 5;
	int arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);

	}
	for(int i = 0; i < size; ++i){
		if(arr[i] % 2 ==1 ){
			qanak = qanak + 1;
		}
	}
	printf("the number of odds in array is: %d\n", qanak);
	return 0;
}
