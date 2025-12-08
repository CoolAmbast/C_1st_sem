// merge sort
#include<stdio.h>
//function declaration
void merge_sort(int array[], int start_index, int last_index);
void merge(int array[], int a, int b, int c);// a= first_index, b = mid_index, c = last_index
int main(void)
{
	int array[] = { 22,33,1,6,88,65,77,4};
	
	//printf unsorted array
	printf("unorted array\n");
	for(int i =0; i<8; i++){
		printf("%d\t", array[i]);		// \t is used for tab
	}
	
	// function call
	merge_sort(array,0,7);
	/* you can first find size of given array as
	size = sizeof(a)/sizeof(a[0])  and call function as merge_sort(a,0,size-1) */
	
	printf("\n");
	printf("sorted array after merge sort\n");
	for(int i =0; i<8; i++) {// if you use size , then use for(int i =0; i< size; i++)
		printf("%d\t", array[i]);
	}
}
void merge_sort(int array[], int start_index, int last_index)
{
	if( start_index < last_index) {
		int mid_index = start_index + (last_index - start_index)/2;//  you can also write as mid index = (last_index + first_index)/2
		merge_sort(array, start_index, mid_index);// recursive function for first left array
		merge_sort(array, mid_index+1, last_index);// recursive function for second left array
		merge(array,start_index, mid_index, last_index );
	}
}
//merge function definition
void merge(int array[], int a, int b, int c)// a = intial ; b = mid; c = final
{
	int i, j, k;
	int size1, size2; // size1 and size2 is size of 2 array
	size1= b - a +1 ;// last index - first index +1 =  size of array
	size2 = c -b;// c - (b+1) +1 = c- b
	int left_array[size1], right_array[size2];// left and right sub_array with size
	
	for(int m =0; m< size1; m++){
		left_array[m] = array[a+m];// **************************copy value of half array into left_array
	}
	for(int m =0; m<size2; m++){
		right_array[m] = array[b+1+m];// ***********************copy value of next half array into right_array
	}
	
	/* Now we assign i at first element in left_index ,  j at first element in right_array and k at first element at given array*/
	/* intial index of i and j will be 0*/
	i=0, j=0, k= a;
	
	// both auxilliary array elements are present
	while(i<size1 && j<size2){ 
		if( left_array[i] < right_array[j]){
			array[k] = left_array[i];// left_array  value becomes value of array
			i++; //increment i
			k++;// increment k
		}
		else{
			array[k]= right_array[j];
			j++;
			k++;
		}
	}
	
	//when second sub_array exhausted(left_array element left)
	while(i< size1){ 
		array[k]= left_array[i];
		i++;
		k++;
	}
	//when first sub_array exhausted(only right_array element left
	while(j< size2){
		array[k]= right_array[j];
		j++;
		k++;
	}
}