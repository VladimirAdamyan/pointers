#include<stdio.h>

int main(){

        const int size1 = 3;
        const int size2 = 3;
        int arr[size1][size2];
        int arr1[size1] = {};
        for(int i = 0; i < size1; ++i){
                for(int j = 0;j < size2; ++j){
                        scanf("%d", &arr[i][j]);

                                if(i == j + 1){
                                        arr1[i] = arr[i][j];
                                }

                }
        }
	int sum = 0;
	for(int i = 0; i < size1; ++i){
                sum = arr1[i] + sum;
		

        }
                printf("%d\n", sum);

        return 0;
}

