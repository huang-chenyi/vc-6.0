#include <stdio.h>
int main(void){
	int i;
	for(i = 0;i <= 12;i++){
		if(i >= 0 && i < 1){
			printf("!");
		}else if(i >= 1 && i < 2){
			printf("��");
		}else if(i >= 2 && i < 3){
			printf("�");
		}else if(i >= 3 && i < 4){
			printf("��");
		}else if(i >= 4 && i < 5){
			printf("��");
		}else if(i >= 5 && i < 6){
			printf("��");
		}else if(i >= 6 && i < 7){
			printf("ͩ");
		}else if(i >= 7 && i < 8){
			printf("˧");
		}else if(i >= 8 && i < 9){
			printf("̫");
		}else if(i >= 9 && i < 10){
			printf("��");
		}else if(i >= 10 && i < 11){
			printf("��");
		}else{
			i = 0;
		}
	}
	return 0;
}