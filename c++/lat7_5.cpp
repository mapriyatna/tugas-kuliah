#include<iostream>
int mult (int x, int y, int z);
using namespace std;
int main()
{
int x, y, z;
cout <<"masukkan bilangan pertama :";
cin>>x;
cout <<"masukkan bilangan kedua :";
cin>>y;
cout <<"masukkan bilangan ketiga :";
cin>>z;
cout <<"hasil perkalian bilangan itu adalah" << mult(x,y,z);
return 0;
}

int mult (int x, int y, int z)
{
return x*y*z;
}
