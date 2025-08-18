#include<stdio.h>

int main(){

	const int size = 5;
	char arr[size] = {};
	for(int i = 0; i < size; ++i){
		scanf(" %c", &arr[i]);
	}
	int i = 0;
	while(i < size){
		if(arr[i] > 49 && arr[i] < 57){
			printf("%c\n", arr[i]);

		}
		++i;
	}



	return 0;
}
