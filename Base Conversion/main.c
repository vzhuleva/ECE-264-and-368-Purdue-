#include <stdio.h>
#include <stdlib.h>
#include "base.h"



int main(int argc, char* argv[]) {

 int n = 0;
 int base = 0;
 char* prefix = NULL;
 printf("Enter the decimal number to convert: ");
 scanf("%d\n", &n);
 printf("Enter the base (2-36): ");
 scanf("%d\n", &base);
 printf("Enter the prefix: ");
 scanf("%s\n", prefix);

 print_integer(n, base, prefix);




 return EXIT_SUCCESS;

}
