#include <iostream>
#include <conio.h>
using namespace std;
void genap(int);
void ganjil(int);
int main()
{
int bil;
do
{
cout<<"\nMasukan Sebuah Angka (0 to Quit) :";
cin>>bil;
genap(bil);
}
while( bil != 0 );
getch();
}
void genap( int a)
{
if( a%2 == 0 )
{
cout<<"Termasuk Bilangan Genap\n";
}
else
ganjil(a);
}
void ganjil( int a)
{
if( a%2 != 0 )
{
cout<<"Termasuk Bilangan Ganjil\n";
}
else
genap(a);
}
