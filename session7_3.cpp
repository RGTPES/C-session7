#include<stdio.h>
int main(){
	int count;
	int array[5]={5,7,1,9,11};
	for(int i =0;i<5;i++){
		if(array[i] % 2 ==0){
			printf("%d la so chan \n",array[i]);
			count++;
		}
		if(count ==0){
			printf("ko co so chan nao");
		}
	}
	
}
