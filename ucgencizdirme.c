/*Kadir Kaya
12/03/2016
Ucgen cizdirme programı
*/
#include <stdio.h>

void shape(int width);

int main(){

	int size;
	printf("Ucgenin genisligini giriniz: ");
	scanf("%d", &size);
	if(size > 0 && size%2 != 0){
		shape(size);
	}
	else
		printf("Ucgenin size'i tek sayi olmak zorunda!\n");
	
	return 0;
}

void shape(int width){

	int row = (width -1)/2;
	int bosluk1 = (width -1)/2;
	int bosluk2 = 1;
	int i, j, k, m;

	for(k = 0; k < row; k++){
		for(i = bosluk1; i > 0; i--)
			printf(".");
		printf("*");
		if(k != 0){
			for(j = bosluk2; j > 0; j--)
				printf(".");
			bosluk2 += 2;
			printf("*");
		}
		--bosluk1;
		printf("\n");

	}

	for(m = 0; m < width; m++)
		printf("*");
	printf("\n");
}
