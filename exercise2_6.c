#include <stdio.h>
#include <string.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	unsigned a;
	x = (x &(~((~(~0 << n)) << (p - n + 1))));
	y = (~(~0 << n)&y) << (p - n + 1);
	a = x + y;
	return a;


}
main() {
	printf("setbits(0x12345678, 7, 8 ,0x89ABCDEF) =%X\n", setbits(0x12345678, 7, 8, 0x89ABCDEF));
	printf("setbits(0x12345678, 15, 16,0x89ABCDEF) =%X\n", setbits(0x12345678, 15, 16, 0x89ABCDEF));
	printf("setbits(0x12345678, 15, 8, 0x89ABCDEF) =%X\n", setbits(0x12345678, 15, 8, 0x89ABCDEF));
	printf("setbits(0x12345678, 9, 10, 0x89ABCDEF) =%X\n", setbits(0x12345678, 9, 10, 0x89ABCDEF));
}