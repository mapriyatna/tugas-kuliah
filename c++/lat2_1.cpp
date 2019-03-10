#include <stdio.h>
main()
{
int panjang, lebar, luas, keliling;
printf ("Masukkan panjang Persegi Panjang:"); scanf ("%d", &panjang);
printf ("Masukkan Iebar Persegi Panjang:"); scanf ("%d", &lebar);
luas=panjang*lebar;
keliling=2*(panjang+lebar);
printf ("Jadi luas Persegi Panjang adalah : %d\n",luas);
printf ("Jadi keliling Persegi Panjang adalah : %d\n",keliling); 
}
