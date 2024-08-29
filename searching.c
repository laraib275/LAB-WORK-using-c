#include<stdio.h>
int main() {
	int n,i;
    printf("enter thesize of your array : ");
    scanf("%d",&n);
        int num[n];
        printf("Enter you array :");
        for(i=0;i<n; i++){
        	scanf("%d",&num[i]);
		}
        int target=2;
        int ans=binarysearch(num,n, target);
      printf("%d",ans);

    }
      int binarysearch(int arr[], int n, int target) {
      
        int start = 0;
        int end = n - 1;
       
        while(start<=end) {
            int mid = start + (end - start) / 2;
            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;



    } 
