#include<stdio.h>
int main() {
	int n , i ;
	printf("Enter the size for your  array : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements in your array : ");
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	int ele, pos;
	printf("enter element which you want to insert : ");
	scanf("%d",&ele);
	printf("enter the location where you want to insert the element : ");
	scanf("%d",&pos);
	for(i=n; i>=pos; i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=ele;
	printf("After the insertion : ");
		for(i=0; i<=n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
