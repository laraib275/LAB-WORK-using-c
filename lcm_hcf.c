#include<stdio.h>
int main(){
	int x, y,i;
	printf("Enter the value of x and y : ");
	scanf("%d",&x);
		scanf("%d",&y);
	int hcf,lcm;
	int a=x;
	int b=y;
	int max;
	if(a>b){
		max=a;
	} else {
		
	max=b; }
	for(i=1;i<=max; i++){
		if((x%i==0) && (y%i==0)){
			hcf=i;
		}
	}
	lcm=(x*y)/hcf;
	printf("HCF of the two numbers are : %d \n", hcf);
	printf("LCM of the two numbers are : %d", lcm);
	return 0;
	
}
