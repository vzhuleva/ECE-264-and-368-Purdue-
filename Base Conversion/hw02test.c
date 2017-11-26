#include <stdio.h>
#include <limits.h>
#include "hw02.h"

int main (int argc, char* argv[]) {

	print_integer(7658336, 35, "");	
	printf("\n");
	print_integer(1234, 6, "*%");
	printf("\n");
	print_integer(1234, 16, "^^");
	printf("\n");
	print_integer(-1681354, 25, "*!");
	printf("\n");
	print_integer(-68489, 5, "");
	printf("\n");
	print_integer(15, 2, "%/");
	printf("\n");
	print_integer(-68465241, 35, "@!");
	printf("\n");
	print_integer(68465241, 35, "!@");
	printf("\n");
	print_integer(340, 9, "");
	printf("\n");
	print_integer(2, 2, ""); 
	printf("\n");
	print_integer(1000, 16, ""); 
	printf("\n");
	print_integer(1000, 2, ""); 
	printf("\n");
	print_integer(10, 32, ""); 
	printf("\n");
	print_integer(46656, 36, ""); 
	printf("\n");



	return 0;
}
