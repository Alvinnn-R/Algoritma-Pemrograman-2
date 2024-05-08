#include <stdio.h>

int main() {
	
	/* Buatlah 1 Soal, Algoritma, flowchart dan program yang mengimplementasikan konsep Percabangan 
	dalam Bahasa C yang mengimlementasikan syntax switch case */
	
	/* Soal : Menentukan Seragam Sekolah SMA Sesuai Hari Yang Diinputkan */
	
	int hari;
	printf("Masukan Hari, Dengan inputan angka 1,2,3,4,5,6. Sesuai pilihan dibawah ini.\n");
	printf("1. Senin\n2. Selasa\n3. Rabu\n4. Kamis\n5. Jum'at'\n6. Sabtu\n\n");
	printf("Inputan : ");
	scanf("%d", &hari);
	
	printf("Seragam Yang Dipakai : ");
	switch (hari) {
	  case 1:
	    printf("Biru Putih Beserta Topinya (Senin)");
	    break;
	  case 2:
	    printf("Biru Putih (Selasa)");
	    break;
	  case 3:
	    printf("Biru - biru (Rabu)");
	    break;
	  case 4:
	    printf("Batik Hitam (Kamis)");
	    break;
	  case 5:
	    printf("Pramuka (Jum'at)");
	    break;
	  case 6:
	    printf("Pramuka Lengkap (Sabtu)");
	    break;
	  default:
	  	printf("Inputan Hari Invalid");	
}
	
	return 0;
}
