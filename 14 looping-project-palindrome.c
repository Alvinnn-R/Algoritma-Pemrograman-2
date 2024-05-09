#include <stdio.h>
#include <string.h>

int main() {
	
	// Soal : Program mengecek kata palindrome menggunakan inputan dengan menginplementasi perulangan(looping) dan percabangan(If-else)
	// Palindrom merupakan sebuah kata, bilangan, frasa, atau susunan karakter lain yang serupa jika dibaca dengan urutan terbalik ataupun tidak.
	
	char kata[50];	
	
	printf("Program Mengecek Kata Palindrome (kakak = kakak(palindrome)) | (adik = kida(not palindrome))");
	printf("\nMasukan kata untuk dicek = ");
	scanf("%s", kata);
	
	int kiri = 0, palindrome = 1;
	int kanan = strlen(kata) - 1; //strlen adalah untuk mengetahui panjang/lenght tipe data string
	
	while(kiri < kanan) {
		if(kata[kiri] != kata[kanan]) {
			palindrome = 0; // palindrome = 0/false (bukan palindrome)
			break;
		} 
		kiri++;
		kanan--;
	}
	
	printf("\nKata %s", kata);
	
	if (palindrome) { // palindrome bernilai 1/true karena sudah diinisialisasi angka 1 diawal
		printf(" tersebut adalah palindrome");
	} else { // palindrome bernilai 0/false karena kata diatas dicek bukan palindrome maka variable palindrome diinisialisasi angka 0
		printf(" tersebut adalah bukan palindrome");
	}
	
	return 0;
}
