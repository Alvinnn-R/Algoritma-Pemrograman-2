#include <stdio.h>

int main() {
	// Mendeklarasikan variable luas, jari_jari dengan tipe data float
	float luas, jari_jari;
	printf("Program Menghitung Luas Lingkaran Dengan Inputan\n");
	
	// Syntak Input jari jari lingkaran menggunakan scanf
	printf("Masukan Jari-jari Lingkaran = ");
	scanf("%f", &jari_jari);
	
	// Syntak Menghitung Luas Lingkaran
	luas = 3.14 * jari_jari * jari_jari;
	
	// Menampilkan Hasil Luas Lingkaran
	printf("\nHasil Luas Lingkaran = %f", luas);
	return 0;
}
