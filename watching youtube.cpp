#include<stdio.h>
int main(){
	int n,m,a[100],sum,i;
	scanf("%d",&n);
		scanf("%d",&m);
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			}
			for(i=0;i<n;i++){	
			sum=sum+a[i];
			if(sum>=m*(n-i)){
			
				printf("Ans is  %d",i);
				break;}
			}
	return 0;
}
