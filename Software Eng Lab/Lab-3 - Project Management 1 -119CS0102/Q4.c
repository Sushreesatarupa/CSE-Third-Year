/*
ROLL:119CS0102
SUSHREE SATARUPA

Consider  an  office  automation  system.
There  are  4 major modules:
1. Data Entry 0.6 KLOC
2. Data Update 0.6 KLOC
3. Query 0.8 KLOC
4. Reports 1.0 KLOC

The  various  cost driver  attributes  are  of  high  complexity,  high  storage,  low  experience  and low  programmer  capability  with  all  others  being  nominal.
Use  intermediate  COCOMO  to estimate
1. final   effort
2. average   staff   size
3. total   development   time

1. Value   for   high complexity=1.15
2. value  for  high  storage=1.06
3. value  for  low  experience=1.13
4. value  for  low programmer capability=1.17
5. nominal value=1

*/
#include <stdio.h>
#include <math.h>
int main() {

	float Data_Entry = 0.6;
	float Data_Update = 0.6;
	float Query = 0.8;
	float Reports = 1.0;
	float KLOC = Data_Entry + Data_Update + Query + Reports;

	float high_complexity = 1.15;
	float high_storage = 1.06;
	float low_experience = 1.13;
	float low_programmer_capability = 1.17;
	float nominal_value = 1;
	float AF = high_complexity * high_storage * low_experience * low_programmer_capability * nominal_value;

	float c = 2.8, k = 1.2;

	float final_effort, average_staff_size, total_development_time;
	final_effort = AF * c * pow(KLOC, k);
	total_development_time = 2.5 * pow(final_effort, 0.32);
	average_staff_size = final_effort / total_development_time;
	printf("the effort, development time and average staff size are %f person months , %f months and %f person respectively", final_effort, total_development_time, average_staff_size);

	return 0;
}

