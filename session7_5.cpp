#include<stdio.h>
int main(){
int array[5]={3,4,5,6,7};
	int max= array[0];
	int min= array[0];
	
	for(int i =0;i<5;i++){
		if(array[i] > max){
			max = array[i];
		}
		if(array[i] < min){
			min = array[i];
		}
	}
	printf("so lon nhat la %d\n",max);
	printf("so nho nhat la %d\n",min);
}
