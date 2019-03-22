#include<stdio.h>
long fibonacci(long n)
{
if(n==1 || n==2)
{ return 1; }
else
{ return fibonacci(n-1) + fibonacci(n-2); }
}

main()
{
int x;
printf("masukkan nilai fibonacci :");
printf("masukkan nilai x:"); scanf("%d", &x);
printf("nilai fibonacci dari %d=%d\n", x, fibonacci(x));
}
