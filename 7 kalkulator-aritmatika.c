#include <stdio.h>

int main() {
	
	printf("------------------------------------------\n\n");
	printf("Kalkuator Aritmatika C");
	float na,nb, hasil, pil;
	printf("\nMasukan Nilai A = ");
	scanf("%f", &na);
	
	printf("\nMasukan Nilai B = ");
	scanf("%f", &nb);
	
	// 1 = true (karena boolean pada bahasa c tidak didefinisikan secara bawaan, harus menyertakan <stdbool.h>)
	while (1) {
	printf("\n\nMasukan Pilihan Aritmatika\n1. + = Penjumlahan\n2. - = Pengurangan\n3. * = Perkalian\n4. / = Pembagian\n5. tekan apapun selain angka diatas\nMasukan Pilihan : ");
	scanf("%f", &pil);
		if (pil==1) {
			hasil = na + nb;
			printf("Hasil %f + %f = %f", na, nb, hasil);
		} else if (pil==2){
			hasil = na - nb;
			printf("Hasil %f - %f = %f", na, nb, hasil);
		} else if (pil==3){
			hasil = na * nb;
			printf("Hasil %f x %f = %f", na, nb, hasil);
		} else if (pil==4){
			hasil = na / nb;
			printf("Hasil %f : %f = %f", na, nb, hasil);
		} else {
			break;
		}
	}
	
	return 0;
}
