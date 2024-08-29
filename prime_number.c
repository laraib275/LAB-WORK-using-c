#include<stdio.h>
int main(){
	int start, end , i;
	printf("enter the range from where to where u want to find prime numbers : ");
	scanf("%d",&start);
	scanf("%d",&end);
	for(i=start;i<=end; i++){
		if(isprime(i)==1){
			printf("%d ",i);
		}
	}
		return 0;
}
	int isprime(int n){
		int count=0;
		int i;
		for(i=2;i<n/2;i++){
			if(n%i==0){
			count++;
			}
		}
		if(count==0){
			return 1;
		}
		return 0;
	}

