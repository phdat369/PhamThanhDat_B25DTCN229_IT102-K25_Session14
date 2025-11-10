#include <stdio.h>
#include <math.h>
int max(int n,int array[]){
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	int max=array[0];
	for(int i=0;i<n;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	return max;
}
int main(){
	int n;
	int array[n];
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int so_lon_nhat=max(n,array);
	printf("So lon nhat trong mang la : %d",so_lon_nhat);
}
