
	/* This program accesses an invalid array cell.  Why does it work?
	** Draw the memory map. (pg 75) */

#include <stdio.h>

int main()
{
int a[2];	/* 2 cells, each cell 4 bytes (32 bits) */
float b[4];	/* 3 cells, each cell 4 bytes (32 bits) */
double c[4];	/* 4 cells, each cell 8 bytes (64 bits) */
char d[5];	/* 5 cells, each cell 1 bytes (8 bits) */

a[0]=5;
b[1]=4.0;
c[2]=14.7;
d[4]='a';

printf("%p\n",&b[3]);

return 0;

}

