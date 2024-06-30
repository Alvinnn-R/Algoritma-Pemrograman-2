#include <stdio.h>

int main() {
	
	char kata[5];
	int n;
	
	kata[0] = 'A';
	kata[1] = 'B';
	kata[2] = 'C';
	kata[3] = 'D';
	kata[4] = 'E';
	
	for (n = 0;n<5;n++){
		printf("%c\n", kata[n]);
	}

	int data[10] = {10,5,4,2,5,3,8,9,2,9};
	int i;
	int terbesar = data[0];
	
	for(i=0;i<10;i++){
		if (data[i] > terbesar){
			terbesar = data[i];
		}
	}
		printf("%d\n", data[i]);


	char bulan[][10] = {" ", "Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September","Oktober", "November", "Desember"};
	int i;
	
	int kodebulan;
	printf("Masukan Kode Bulan (1 - 12) : ");
	scanf("%d", &kodebulan);
	
	if(kodebulan >= 1 && kodebulan <= 12){
		printf("Bulan : %s\n", bulan[kodebulan]);	
	} else {
		printf("Kode bulan harus diantara 1 - 12\n");
	}
	
	char negara[5][3][15];
	int i,j;
	
    strcpy(negara[0][0], "Indonesia");
    strcpy(negara[0][1], "Jakarta");
    strcpy(negara[0][2], "Bali");
    strcpy(negara[1][0], "Thailand");
    strcpy(negara[1][1], "Bangkok");
    strcpy(negara[1][2], "Swadikap");
    strcpy(negara[2][0], "Vietnam");
    strcpy(negara[2][1], "Hanoi");
    strcpy(negara[2][2], "Bintang");
    strcpy(negara[3][0], "Laos");
    strcpy(negara[3][1], "Vientin");
    strcpy(negara[3][2], "Laot");
    strcpy(negara[4][0], "Amerika");
    strcpy(negara[4][1], "New York");
    strcpy(negara[4][2], "mamarika");
	
//	printf("Negara : %s - %s\n", negara[4][0], negara[4][1]);
	
	for(i=0;i<5;i++){
			printf("Negara : %s - %s - %s\n", negara[i][0], negara[i][1], negara[i][2]);
	}
	
	return 0;
}
