#include<stdio.h>
int main(){
		int n , i ;
	printf("Enter the size for your  array : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements in your array : ");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int max;
	max=arr[0];
	for(i=1; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("maximum element in the array is : %d \n" , max);
		int min;
	max=arr[0];
	for(i=1; i<n; i++){
		if(arr[i]<max){
			min=arr[i];
		}
	}
	printf("minimum element in the array is : %d" , min);
	return 0;
}
