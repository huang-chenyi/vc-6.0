#include <stdio.h>
int main(void){
	int i;
	for(i = 0;i <= 12;i++){
		if(i >= 0 && i < 1){
			printf("!");
		}else if(i >= 1 && i < 2){
			printf("»Æ");
		}else if(i >= 2 && i < 3){
			printf("å·");
		}else if(i >= 3 && i < 4){
			printf("Òã");
		}else if(i >= 4 && i < 5){
			printf("±È");
		}else if(i >= 5 && i < 6){
			printf("Îâ");
		}else if(i >= 6 && i < 7){
			printf("Í©");
		}else if(i >= 7 && i < 8){
			printf("Ë§");
		}else if(i >= 8 && i < 9){
			printf("Ì«");
		}else if(i >= 9 && i < 10){
			printf("¶à");
		}else if(i >= 10 && i < 11){
			printf("ÁË");
		}else{
			i = 0;
		}
	}
	return 0;
}