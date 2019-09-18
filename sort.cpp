#include<vector>


void bubbleSort(int *start, const int *end){
	int temp;
	for(int *x = start; x != end; x++){
		for(int *j = x+1; j != end; j++){
			if(*x > *j){
				temp = *x;
				*x = *j;
				*j = temp;
			}
		}
	}
}