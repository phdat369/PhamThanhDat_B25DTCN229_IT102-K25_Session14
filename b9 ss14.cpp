#include <stdio.h>
#include <math.h>
void uoc_chung_max(int a,int b){
	if(a==0 || b==0){
		printf("Uoc cung lon nhat cua a va b : %d",a+b);
	}
	else if(a>=b){
		for(int i=b;i>=1;i--){
			if(a%i==0 && b%i==0){
				printf("Uoc chung lon nhat cua a va b la : %d",i);
				break;
			}
		}
	}
	else {
	    for(int i=a;i>=1;i--){
			if(a%i==0 && b%i==0){
				printf("Uoc chung lon nhat cua a va b la : %d",i);
				break;
			}
		}	
	}
}
int main(){
	int a,b;
	printf("Nhap 2 so a va b : ");
	scanf("%d%d",&a,&b);
	uoc_chung_max(a,b);
}
