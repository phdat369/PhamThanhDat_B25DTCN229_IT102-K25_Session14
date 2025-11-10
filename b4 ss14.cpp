#include <stdio.h>
#include <math.h>
void nhapmang(int n,int array[]){
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
int main(){
	int n;
	int array[n];
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	nhapmang(n,array);
}
