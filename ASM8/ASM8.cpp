#include <stdio.h>
#include "asm8-1.h"
#include "asm8-2.h"
#include "asm8-3.h"
#include "asm8-4.h"

int main(){
	printf("Total is %d\n", calculateTotal(123));
	printf("Perimeter is %d\n", calculatePerimeter(4,5,6));
	printf("The greatest common divisor is %d\n", findDivisor(9, 12));
	printf("The least common multiple is %d\n", findMultiple(9, 12));
}