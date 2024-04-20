#include <stdio.h>

int main() {
	char nama[50], npm[12], ttl[30], alamat[50], jeniskelamin[10], notlp[12], asalsekolah[20], namaortu[30], agama[10], prodi[20];
	
	// Get and save the number AND character the user types
	//	scanf("%d %c", &myNum, &myChar);
	
	//	From the example above, you would expect the program to print "John Doe", but it only prints "John".

	//  That's why, when working with strings, we often use the fgets() function to read a line of text.
	//	Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin 
	
	//	printf("Type your full name: \n");
	//	fgets(fullName, sizeof(fullName), stdin);
	/*	or gets(fullname) is not recomendation and a buffer overflow as one of its methods of propagating from system to system.
	 The basic problem is that the function doesn't know how big the buffer is, so it continues reading until it finds a newline 
	 or encounters EOF, and may overflow the bounds of the buffer it was given..*/
	
	printf("=============== Inputkan Data Diri Anda ===============\n");
	printf("Masukan Nama = ");
	gets(nama);
	
	printf("Masukan NPM = ");
	gets(npm);
	
	printf("Masukan Tempat Tanggal Lahir = ");
	gets(ttl);
	
	printf("Masukan Alamat = ");
	gets(alamat);
	
	printf("Masukan Jenis Kelamin = ");
	gets(jeniskelamin);
	
	printf("Masukan No Telephone = ");
	gets(notlp);
	
	printf("Masukan Asal Sekolah = ");
	gets(asalsekolah);
	
	printf("Masukan Nama Orang Tua = ");
	gets(namaortu);
	
	printf("Masukan Agama = ");
	gets(agama);
	
	printf("Masukan Program Studi = ");
	gets(prodi);
	
	printf("\n=============== Tampilan Data Diri Anda ===============\n");
	
	printf("Nama \t\t\t : %s\n", nama);
	printf("NPM \t\t\t : %s\n", npm);
	printf("Tempat Tanggal Lahir \t : %s\n", ttl);
	printf("Alamat \t\t\t : %s\n", alamat);
	printf("Jenis Kelamin \t\t : %s\n", jeniskelamin);
	printf("No Telp \t\t : %s\n", notlp);
	printf("Asal Sekolah \t\t : %s\n", asalsekolah);
	printf("Nama Ortu \t\t : %s\n", namaortu);
	printf("Agama \t\t\t : %s\n", agama);
	printf("Prodi \t\t\t : %s\n", prodi);
	
	return 0;
}
