# DDK_sorting_concept
Learn the sorting in C.

## Let Us Talk About the Quick Sort
1. Prepare your data, ex, int array[]={6,8,4,1,9,3,2,0,10,5};
2. We should understand that quick sort use the concept of "divide and conquer".
   If you do not know, just google it.
3. Firt, choose a num in your array.
4. This num we called pivot.
5. And do the same thing like bubble sort, compare every num to the pivot.
6. the different is quicksort do not swap num directly with pivot, it swap with the num of front.
7. Finally, the pivot you chose will seperate array like the picture below: <br>
![image](https://user-images.githubusercontent.com/67073582/122881119-5c65bf00-d36d-11eb-8fc3-cc8f083752a5.png) <br>
8. And do recursive for left side and right side of the pivot until the stop condition "front=end".
```C
quicksort(int*array, int front, int end){
	if(front<end){
		int p=partition(array,front,end);
		
		quicksort(array,front, p-1);
		quicksort(array,p+1,front);		
	}
} 
```
