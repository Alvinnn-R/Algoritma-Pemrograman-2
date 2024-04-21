#include <stdio.h>

int main() {
	
	int l, i, j, k, m;
	printf("\nMasukan Jumlah bintang : ");
	scanf("%d", &l);
	
	printf("\nSegitiga Tanpa Spasi\n");
	for (i=1;i<=l;i++) {
		for (j=1;j<=i;j++) {
			for (k=1;k<=j;k++) 
				printf("*");
				{
				for (m=1;m<=k;m++) {
					printf("");
				}
			}
		}
		printf("\n");
	}
	
			printf("\n\n");
	
	int a, b, c, d, e;
	a = l - 1;
	b = 1;
	 
	printf("\nSegitiga Sempurna\n", l);
	for (c=1;c<=l;c++) {
		for (d=1;d<=a;d++) 
		{
		printf(" ");
		}
		for (e=1;e<=b;e++) 
				{
					printf("*");
				}
		printf("\n");
		a--;
		b+= 2;
	}
	
	return 0;
}
