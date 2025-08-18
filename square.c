#include<stdio.h>

int main(){

	int size = 0;
	scanf("%d", &size);
	int arr[size][size];
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){

			
			if(i == 0 || i == size - 1 || j == 0 || j == size - 1){
                                
				
				printf(" %d ", 1);
                        
			}else printf("   ");

		}printf("\n");
	}


	return 0;
}
