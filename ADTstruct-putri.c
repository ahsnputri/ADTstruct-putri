#include <stdio.h>


struct pegawai
{
	char nama[50];
	char jabatan[50];
	char perusahaan[50];
	long int gaji;
};

typedef struct pegawai pegawai;

void main ()
{
	pegawai pgw;
	printf("Nama pegawai : ");
	scanf("%[^\n]%*c",&pgw.nama);
	printf("\n");
	
	printf("Jabatan : ");
	scanf("%[^\n]%*c",&pgw.jabatan);
	printf("\n");
	
	printf("Nama perusahaan : ");
	scanf("%[^\n]%*c",&pgw.perusahaan);
	printf("\n");
	
	printf("Gaji : ");
	scanf("%ld",&pgw.gaji);
	printf("\n\n\n");
	
	printf("--KESIMPULAN--\n\n");
	printf("%s adalah seorang %s di %s dengan gaji %ld perbulan\n\n",pgw.nama,pgw.jabatan,pgw.perusahaan,pgw.gaji);
}
