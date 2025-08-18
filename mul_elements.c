#include<stdio.h>

int main(){

	const int size = 5;
	int arr1[size] = {};
	int arr2[size] = {};
	printf("input firs array\n");
	for(int i = 0; i < 5; ++i){
		scanf("%d", &arr1[i]);
	}
	printf("input second array\n");   
	for(int j = 0; j < 5; ++j){
                scanf("%d", &arr2[j]);
        }
	int i = 0;
	int j = 0;
		while (i < 5){
			
			printf("%d\n",arr1[j] * arr2[i] );
			++j;
			++i;
		}
	return 0;
}
