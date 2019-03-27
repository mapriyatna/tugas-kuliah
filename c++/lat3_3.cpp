#include<stdio.h>
#include<conio.h>
int main()
{
int bil;
printf("\nMasukkan Nilai : ");
scanf("%d",&bil);
if(bil>0)
printf("\n\n%d adalah bilangan positif",bil);
else if(bil<0)
printf("\n\n%d adalah bilangan negatif",bil);
else 
printf("\n\n%d adalah bilangan nol",bil);   
getch();       
}
