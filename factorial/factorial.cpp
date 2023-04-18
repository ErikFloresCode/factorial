#include <iostream>

using namespace std;

float factorial(float num) {
	float fac = 1;
	for (int i = 1; i <= num; i++) {
		fac *= i;
	}
	return fac;
}