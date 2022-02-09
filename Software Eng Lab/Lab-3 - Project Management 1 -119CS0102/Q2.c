/*
ROLL:119CS0102
SUSHREE SATARUPA

Calculate
1. Unadjusted Function Point (UFP)
2. Complexity Adjustment Factor (CAF)
3. Function Point (FP) for the following problem.

1. Number of user inputs=24 (Weighting factor is average)
2. Number of user outputs=46 (Weighting factor is simple)
3. Number of user inquiries=8 (Weighting factor is complex)
4. Number of files=4 (Weighting factor is average)
5. Number of external interfaces=2 (Weighting factor is simple)

The various complexity adjustment values are 4, 1, 0, 3, 3, 5, 4, 4, 3, 3, 2, 2, 4, 5.

*/

#include <stdio.h>
int main() {

	int user_inputs = 24;
	int user_outputs = 46;
	int user_inquiries = 8;
	int files = 4;
	int external_interfaces = 2;

	float UFP, TDI, CAF, FP;
	UFP = user_inputs * 4 + user_outputs * 4 + user_inquiries * 6 + files * 10 + external_interfaces * 5;
	TDI = 4 + 1 + 0 + 3 + 3 + 5 + 4 + 4 + 3 + 3 + 2 + 2 + 4 + 5;
	CAF = (TDI * 0.01) + 0.65;
	FP = UFP * CAF;
	printf("the value of UFP is %f CAF is %f and FP is %f", UFP, CAF, FP);

	return 0;
}  
