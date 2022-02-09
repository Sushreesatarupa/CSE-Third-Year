/*
ROLL:119CS0102
SUSHREE SATARUPA

Calculate
1. Unadjusted Function Point (UFP)
2. Complexity Adjustment Factor (CAF)
3. Function Point (FP)
for the following problem.

1. Number of user inputs=32
2. Number of user outputs=60
3. Number of user inquiries=24
4. Number of files=8
5. Number of external interfaces=2

Assume  all  weighting  factors  to  be  average
and  all  complexity  adjustment  values  to  be average.

*/
#include <stdio.h>
int main() {
	int user_inputs = 32;
	int user_outputs = 60;
	int user_inquiries = 24;
	int files = 8;
	int external_interfaces = 2;

	float UFP,TDI, CAF, FP;
	UFP = user_inputs * 4 + user_outputs * 5 + user_inquiries * 4 + files * 10 + external_interfaces * 7;
	TDI = 42;//as all degree of influences are taken average
	CAF = (TDI * 0.01) + 0.65;
	FP = UFP * CAF;
	printf("The value of UFP is %f CAF is %f and FP is %f", UFP, CAF, FP);

	return 0;
} 
