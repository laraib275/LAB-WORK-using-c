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
	
	 int loc;
	 printf("Enter the position from where you want to delete the element :");
	 scanf("%d",&loc);
	   if (loc < 0 || loc > n) {
        printf("Invalid position!\n");
        return 1;
    }
	 for(i=loc; i<n-1; i++){
	 	arr[i]=arr[i+1];
	 }
	 	printf("After the deletion : ");
	
		for(i=0; i<n-1; i++){
		printf("%d ",arr[i]);
	}
	 
	 
	 return 0;
}
