#include <stdio.h>
#include <conio.h>
main()
{
awal :
int pilihan, ganjil_awal, genap_awal, ganjil_akhir, genap_akhir;

printf("========================\n");
printf("1. Deret Bilangan Ganjil\n");
printf("2. Deret Bilangan Genap\n");
printf("Pilih : ");
scanf("%d", &pilihan);

switch ( pilihan )
{
case 1 :
{
printf("Masukkan nilai awal : ");
scanf("%d", &ganjil_awal);
printf("Masukkan nilai akhir : ");
scanf("%d", &ganjil_akhir);

for ( int a = ganjil_awal; a <= ganjil_akhir; a++ )
{
if ( a % 2 == 0 )
{
continue;
}

else
{
printf("%d ", a);
}
}
} break;

case 2 :
{
printf("Masukkan nilai awal : ");
scanf("%d", &genap_awal);
printf("Masukkan nilai akhir : ");
scanf("%d", &genap_akhir);

for ( int a = genap_awal; a <= genap_akhir; a++ )
{
if ( a % 2 == 0 )
{
printf("%d ", a);
}

else
{
continue;
}
}
} break;

default :
{

printf("MAAF ANDA MEMASUKKAN PILIHAN YANG SALAH !!!");
getch(); goto awal;
}
}
}
