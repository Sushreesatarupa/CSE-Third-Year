/*
ROLL:119CS0102
SUSHREE SATARUPA

100,000  LOC  embedded  system,
compute
1. effort
2. development time
using  intermediate COCOMO.

Assume there are programmers of the low quality but a lot of experience with the programming language with all  other  attribute  values  being  nominal.
1. Value  for  low  quality=1.17,
2. value  for  lot  of experience=0.95,
3. nominal value=1.
*/

#include <stdio.h>
#include <math.h>
int main() {

	int KLOC = 100;
	float low_quality = 1.17;
	float lot_experience = 0.95;
	float nominal_value = 1;
	float EAF = low_quality * lot_experience * nominal_value;

	float c = 2.8, k = 1.2;
	float effort = EAF * c * pow(KLOC, k);
	float development_time = 2.5 * pow(effort, 0.32);
	printf("the effort and development time are %f person months and %f months respectively", effort, development_time);

	return 0;
}
