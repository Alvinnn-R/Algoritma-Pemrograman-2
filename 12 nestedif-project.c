#include <stdio.h>

int main() {
	
	/*Buatlah 1 soal, algoritma, flowchart dan program yang mengimplementasikan konsep Percabangan bersarang/nested if*/
	
	/*Soal : Program Untuk Menentukan Skor IQ dengan Menjawab Soal-soal Pertanyaan tentang kemampuan kognitif dan kecerdasan seseorang 
	berdasarkan cara mereka berpikir dan merespon terhadap situasi atau permasalahan yang diberikan dengan mengimplementasikan Nested If*/
	
    char nama[30];
    int iq = 0;
    char jawaban;

    printf("Program Untuk Menentukan Skor IQ Anda\n");
    printf("Masukkan nama anda: ");
    fgets(nama, sizeof(nama), stdin);

    printf("\nApakah Anda sering merasa tertarik dengan teka-teki atau permasalahan yang kompleks? (Y/T): ");
    scanf(" %c", &jawaban);
    if (jawaban == 'Y' || jawaban == 'y') {
        iq += 34;

        printf("\nApakah Anda mudah memahami instruksi tertulis dan mengikuti langkah-langkah secara sistematis? (Y/T): ");
        scanf(" %c", &jawaban);
        if (jawaban == 'Y' || jawaban == 'y') {
            iq += 32;

            printf("\nApakah Anda sering memperhatikan detail-detail kecil dalam situasi sehari-hari? (Y/T): ");
            scanf(" %c", &jawaban);
            if (jawaban == 'Y' || jawaban == 'y') {
                iq += 21;
            } else {
                iq += 16;
            }
        } else {
            iq += 24;

            printf("\nApakah Anda sering merasa ingin tahu dan mencari tahu tentang hal-hal baru? (Y/T): ");
            scanf(" %c", &jawaban);
            if (jawaban == 'Y' || jawaban == 'y') {
                iq += 31;
            } else {
                iq += 19;
            }
        }
    } else {
        iq += 22;

        printf("\nApakah Anda sering merasa ingin tahu dan mencari tahu tentang hal-hal baru? (Y/T): ");
        scanf(" %c", &jawaban);
        if (jawaban == 'Y' || jawaban == 'y') {
            iq += 32;

            printf("\nApakah Anda memiliki kemampuan untuk memecahkan masalah yang rumit dengan cara yang kreatif? (Y/T): ");
            scanf(" %c", &jawaban);
            if (jawaban == 'Y' || jawaban == 'y') {
                iq += 27;
            } else {
                iq += 18;
            }
        } else {
            iq += 24;

            printf("\nApakah Anda memiliki kemampuan untuk memecahkan masalah yang rumit dengan cara yang kreatif? (Y/T): ");
            scanf(" %c", &jawaban);
            if (jawaban == 'Y' || jawaban == 'y') {
                iq += 31;
            } else {
                iq += 21;
            }
        }
    }

    printf("\nHallo %sSkor IQ anda adalah %d\n",  nama, iq);

    return 0;
}

