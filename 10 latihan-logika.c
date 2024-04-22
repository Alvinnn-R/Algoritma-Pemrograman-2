#include <stdio.h>
#include <math.h>

int main() {
	
	//Buatlah code untuk mencetak list angka berikut :149162536496481100	

	int a, kali;
	for (a=1;a <= 10;a++) {
	kali = a * a;
	printf("%d\n", kali);
}
	//	Buatlah code program untuk menampilkan bilangan berikut 
	// 	a. 1 , 3 , 5 ,7 , 9 , 11, 13
	printf("\n\n");
	int b, z; 
	for (b=1;b <= 13; b++) {
		if (b % 2 != 0) {
		printf("%d\n", b);
	}
}
	
	//	Or
	printf("\nOr\n\n");
	for (z = 1;z <= 13; z+=2){
		printf("%d\n", z);
	}
	
	//	b. 0.1 , 0.02  , 0.003  , 0.0004 , 0.00005
	float c, n;
	
    printf("\nBilangan disamping urutannya:\n");
    for (c = 1; c <= 5; c++) {
		n = c / pow(10, c);
		printf(" %f,", n);
    }
    
	//	c. 1, – 2 , 3 , – 4, 5 , -6 , 7
	printf("\n\n");
	int v, x; 
	
	for (x = 1;x <= 7;x++) {
		if (x % 2 == 0) {
			v = -x;
		} else {
			v = x;
		}
		printf("%d\n", v);
	}
	

	return 0;
}
