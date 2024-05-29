#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=7;i++){
		for(int k=n;k>=0;k--){
			if((i*k+n-k<=m) &&(i*k+7*n-7*k>=m) )
			{
				printf("%d ",k);
				break;
			}
		}
	}
	return 0;
} 
