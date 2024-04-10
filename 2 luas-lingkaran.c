#include <stdio.h>

int main() {
	
	printf("Program Menghitung Luas Lingkaran \n \n");
	
	// Mendeklarasikan variable luas dan jari_jari dengan tipe data float & menginisialisasi variable jari_jari dengan nilai 10
	float luas, jari_jari = 10;
	
	// Menghitung luas lingkaran
	luas = 3.14 * jari_jari * jari_jari;
	
	// Menampilkan hasil Luas Lingkaran
	printf("Luas Lingkaran = %f", luas);
	
	return 0;
}
