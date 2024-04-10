#include <stdio.h>

int main() {
	// Mendeklarasikan variable nama, alamat, nama_ortu, no_telp dengan tipe data char dengan panjang yang sesuai dengan dibutuhkan
	char nama[50], alamat[100], nama_ortu[50], no_tlp[13];
	
	// sytaks fgets supaya dapat menggunakan lebih dari 1 kata dan dapat dengan tanda koma, spasi, dll.
	printf("Masukan Nama anda = ");
	fgets(nama, sizeof(nama), stdin);
	
	printf("Masukan Alamat anda = ");
	fgets(alamat, sizeof(alamat), stdin);
		
	printf("Masukan Nama Orang Tua anda = ");
	fgets(nama_ortu, sizeof(nama_ortu), stdin);
	
	printf("Masukan No Telephone anda = ");
	fgets(no_tlp, sizeof(no_tlp), stdin);
	
	printf("\nIdentitas Diri Anda\n\n");
	printf("Nama : %s", nama);
	printf("Alamat : %s", alamat);
	printf("Nomor Telephone : %s\n", no_tlp);
	printf("Nama Orang Tua : %s", nama_ortu);
	
	return 0;
}
