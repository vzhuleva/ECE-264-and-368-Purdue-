#include <stdio.h>
#include <stdlib.h>
#include "base.h"
#include <string.h>


void print_integer(int n, int radix, char* prefix) {

	int convNum = 0;
	int backRem;
	int nCp;
	int powBase = 1;
	int prefInt = 0;
	char* error = "Error! Please check your input!\n";

	if(radix < 2 || radix > 36) {
		fprintf(stderr, "%s\n", error);
		return;
	}

	if (n < 0) { // using copy of n because n was modified to be positive integer
		fputc('-', stdout); // print the negative sign upfront if the number is negative
		n *= -1; // if n is negative make it positive so it does not mess up the conversion
	}

	while(prefix[prefInt] != '\0')  {// if prefix value is not zero, output the prefix array
		fputc(prefix[prefInt], stdout);
		prefInt++;
	}

	nCp = n; // make the copy of number n so it does not get lost

	while (n >= radix) {
		n /= radix;
		convNum++;
	}

	for (int i = 1; i <= convNum; i++) { // the biggest power of base based on number of times n was divided by base
		powBase *= radix;
	}

	while (powBase != 1) {
		backRem = nCp / powBase; //use the found value of number of conversions to go backwards and print remainders in the correct order
		nCp -= backRem * powBase;
		// the format of the outputted number should be backRem1, backRem2...backRemN, nCp

		if (backRem > 9) {
			fputc('a' + backRem - 10, stdout);
		}else {
			fputc('0' + backRem, stdout);
		}
		powBase /= radix;
	}

	if (nCp > 9) { //account for the very last remaining number
		fputc('a' + nCp - 10, stdout);
	}

	else {
		fputc('0' + nCp, stdout);
	}

}
