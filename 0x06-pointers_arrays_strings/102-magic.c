c
#include <stdio.h>

int main(void) 
{
int a[] = { 2015, 2016, 98, 2017, 2018 };
int n = 98;
int *p = &n;

p = &a[2];
printf("a[2] = %d\n", *p); // added line

return 0;
}
