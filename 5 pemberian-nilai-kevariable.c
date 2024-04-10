#include <stdio.h>

int main() {
	// Deklarasi variable nilai_a, nilai_b dengan tipe data integer
	int nilai_a, nilai_b, nilai_c;
	
	// Pemberian Nilai Ke Variable dengan inisialisasi langsung nilainya
	printf("Pemberian Nilai A dengan inisialisasi langsung ke variable\n");
	nilai_a = 290;
	printf("Nilai A berisi = %d\n\n", nilai_a);
	
	// Pemberian Nilai Ke Variable dengan value suatu proses aritmatika
	printf("Pemberian Nilai B dengan memberi proses aritmatika penjumlahan ke variablenya\n");
	nilai_b = 290 + 10 - 100;
	printf("Nilai B berisi = %d\n\n", nilai_b);
	
	// Pemberian Nilai Ke Variable sesuai inputan yang dimasukannya
	printf("Pemberian Nilai C dengan inputan\n");
	printf("Masukan Nilai C = ");
	scanf("%d", &nilai_c);
	printf("Nilai C berisi = %d", nilai_c);
	
	return 0;
}
