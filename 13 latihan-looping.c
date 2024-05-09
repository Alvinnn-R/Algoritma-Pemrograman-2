#include <stdio.h>

int main() {
	
	// Perulangan While dan Do-While
//	while (kondisi)
//	{
//		pernyataan_1;
//		pernyataan_n;
//	}

//	do {
//		pernyataan_1;
//		…
//		pernyataan_n;
//	}while (kondisi == false);

	// Program sederhana menampilkan suatu teks sebanyak 6 kali
	int a = 1;
	
	while(a <= 6) {
		printf("\nHello");
		a++;
	}
	
	// Program sederhana menampilkan bilangan ganjil antara 1 sampai 10
	a = 1;
	
	while(a <= 10) {
		printf("\n\n%d", a);
		a += 2;
	}
	
	/* Program sederhana untuk menampilkan deret sebagai berikut :
	1 2 4 7 11 16 22 29 37 46 bila yang diinput oleh pengguna adalah 50*/
	int batas, nilai = 1, cacah = 1;
	printf("\n\nMasukan angka pembatas = ");
	scanf("%d", &batas);
	
	do {
		printf(" %d,", nilai);
		nilai += cacah;
		cacah += 1;
	} while (nilai <= batas);
	
	// Memperoleh FPB (sama dengan di Pertemuan III)
	int m, n, r;
	
	printf("\n\nMasukan nilai a = ");
	scanf("%d", &m);
	printf("\nMasukan nilai b = ");
	scanf("%d", &n);
	
	r = m % n;
	while (r != 0) {
		m = n;
		n = r;
		r = m % n;
	}
	
	printf("\nFPB : %d", n);
	
	// Bilangan Fibonacci 1 1 2 3 5 8 13 21 34 55 89 144
	
	int fn, fn1, fn2;
	
	fn1 = 0;
	fn2 = 1;
	
	printf("\n\nFibonacci : 0, ");
	while(fn <= 200) {
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		printf("%d, ", fn);
	}
	
	// Buatlah program untuk menampilkan bilangan yang tidak habis dibagi 5, range bilangan antara 1 - 25
	int for1;
	printf("\n\n");
	for (for1 = 1; for1 <= 25;for1++) {
		if(for1 % 5 == 0) {
			printf("%d ", for1);
		}
	}
	
	// Program Faktorial
	int for2, rf, hasil = 1;
	printf("\n\n Masukan Faktorial = ");
	scanf("%d", &for2);
	
	for(rf = for2;rf >= 1;rf--) {
		hasil = hasil * rf;
	}
	
	printf("\nFaktorial %d = %d", for2, hasil);
	
	
	
	return 0;
}
