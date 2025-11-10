#include <stdio.h>
#include <math.h>
int giaithua(int x){
	int tich=1;
	for(int i=1;i<=x;i++){
		tich*=i;
	}
	return tich;
}
int main(){
	int n;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
	int tich=giaithua(n);
	printf("Giai thua = %d",tich);
}
