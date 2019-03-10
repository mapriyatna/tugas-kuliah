#include<iostream>
using namespace std;
main()
{
char kode;
cout<<"Pilihan Menu: "<<endl;
cout<<"S. Menghitung luas dan keliling segita."<<endl;
cout<<"P. menghitung luas dan keliling persegi panjang."<<endl;
cout<<"L. Menghitung luas dan keliling lingkaran."<<endl; 
cout<<"Pilih :"<<endl; 
cin>>kode;
switch(kode)
{
case 'S':
case 's':
int pa, pb,a,t,ks,ls;
cout<<"Menghitung luas dan keliling segitiga";
cout<<"Masukkan panjang sisi A : "; cin>>pa;
cout<<"Masukkan panjang sisi B : "; cin>>pb;
cout<<"Masukkan alas : "; cin>>a;
cout<<"Masukkan tinggi : "; cin>>t;
ks=pa+pb+a;
ls=0.5*a*t;
cout<<"Kelilingnya adalah : "<<ks<<endl;
cout<<"Luasnya adalah :  "<<ls<<endl;
break;
case 'P':
case 'p':
int pp, lp, luas, kp;
cout<<"Menghitung luas dan keliling persegi panjang";
cout<<"Masukkan panjang : "; cin>>pp;
cout<<"Masukkan lebar : "; cin>>lp;
luas=pp*lp;
kp=2*(pp+lp);
cout<<"Luasnya adalah : "<<luas<<endl;
cout<<"Kelilingnya adalah : "<<kp<<endl;
break;
case 'L':
case 'l':
int r, kl, ll;
cout<<"Menghitung luas dan keliling lingkaran";
cout<<"Masukkan jari-jari : "; cin>>r;
kl=2*3.14*r;
ll=3.14*r*r;
cout<<"Kelilingnya adalah : "<<kl<<endl;
cout<<"Luasnya adalah : "<<ll<<endl;
break;
default:
cout<<"Kode Tidak Ada"; 
}
}
