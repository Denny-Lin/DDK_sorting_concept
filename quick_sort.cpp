#include<stdio.h>

void swap(int* a, int* b){
	int tmp= *a;
	*a=*b;
	*b=tmp; 
}

int partition(int* array, int front, int end){
	
	int pivot=array[end];
	int i=front-1;
	
	for(int j=front;j<end;j++){
		if(array[j]<pivot){
			i++;
			swap(&array[i],&array[j]);
		}		
	}
	
	i++;
	swap(&array[i],&array[end]);
	
	return i;
}

quicksort(int*array, int front, int end){
	if(front<end){
		int p=partition(array,front,end);
		
		quicksort(array,front, p-1);
		quicksort(array,p+1,front);		
	}
}

int main(){	
	//printf("Hello world!\n");
	
	int array[]={6,8,4,1,9,3,2,0,10,5};
	
	quicksort(array,0,10-1);
			
	for(int i=0;i<10;i++){
		printf("%d, ",array[i]);
	}
	
	printf("\n");
	
	return 0;
} 
