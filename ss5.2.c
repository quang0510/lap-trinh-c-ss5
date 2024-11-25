#include<stdio.h>
int main(){
	
	int a=15, b;
	do{
		printf("moi ban nhap vao so nguyen");
		scanf("%d", &b);
		if(a==b){
			break;
		}
	}while(a!=b);
	return 0;
}
