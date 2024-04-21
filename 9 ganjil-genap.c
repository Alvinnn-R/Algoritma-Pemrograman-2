#include <stdio.h>

int main() {
	
	printf("\nMenampilkan bilangan ganjil dan genap");
	int bil, hasilbil, pilbil, ba, bc;
	
	printf("\nMasukan bilangan = ");
	scanf("%d", &bil);
//	printf("\Bilangan = %d", &bil);
	
	while(1) {

	printf("\nKetik 1 dan 2 untuk bilangan :\n 1. ganjil\n 2. genap\n");
	scanf(" %d", &pilbil);
	
	if (pilbil == 1) {
		hasilbil = 1;
			printf("\nHasil bilangan ganjil dari %d = \n", bil);
		for (ba = 1;hasilbil <= bil;ba++) {
			printf("%d\n", hasilbil);
			hasilbil += 2;
		}
	} else if (pilbil == 2) {
		hasilbil = 2;
				printf("\nHasil bilangan genap dari %d = \n", bil);
		for (ba = 1;hasilbil <= bil;ba++) {
				printf("%d\n", hasilbil);
				hasilbil += 2;
			}
	} else {
		break;
	}
}
	
	return 0;
}
