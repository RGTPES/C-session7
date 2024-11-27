#include<stdio.h>
int main(){
	int a;
	int array[a];
	printf("Nhap vao mang\n");
	scanf("%d",&a);
	for(int i =0;i<a;i++){
		printf("nhap phan tu thu %d\n",i+1);
		scanf("%d",&array[i]);
		while(array[i]%2==0){
		printf("nhap phan tu thu %d\n",i+1);
		scanf("%d",&array[i]);
		}
	}
}
