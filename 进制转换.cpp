#include<stdio.h>

int change(int num,int n){
	int i=0;
	int a[1000]={0};
	int sum=0;
	
	while(num!=0){
		a[i++]=num%n;
		num/=n;
	}
	for(int k=0;k<i;++k){
		sum+=a[i-k];
		a[i-k+1]*=10;
	}
	return sum;
}
int main(){
	int num=0;
	int tw,ei,stn;
	int i=0;
	
	while(1){
		scanf("%d",&num);
		printf("%d\n",change(num,2));
	}
	return 0;
} 
