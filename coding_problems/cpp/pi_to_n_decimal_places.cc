// https://edabit.com/challenge/wzPBMkanx2Db8Kpmp
// Given number n, return PI to n decimal precision

#include <cmath>

double myPi(int n) {
	double base = pow(10, n);
	return round(M_PI * base) / base;
}
