#include<stdio.h>

int main(){

	const int size = 5;
	int num = 0;
	int arr[size] = {};
	printf("input the number: ");
	scanf("%d", &num);
	printf("enter the array\n");
	for(int i = 0; i < 5; ++i){
		scanf("%d", &arr[i]);
	}
	int i = 0;
	while(i < 5){
		if(num == arr[i]){
			printf("yes\n");
		return 0;
		}
	++i;
	}
	printf("no\n");

return 0;
}
