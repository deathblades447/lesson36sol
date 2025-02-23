#include "algorithm.h"
#include <cmath>


int get_max(int* array, int lenght) {
	int max = array[0];

	for (int i = 1; i < lenght; i++) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	return max;
}	

int get_min(int* array, int lenght) {
	int min = array[0];

	for (int i = 1; i < lenght; i++) {
		if (array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

double calculate_arithmetical_avg(int* array, int lenght) {
	double sum = 0;
	for (int i = 0; i < lenght; i++) {
		sum += array[i];
	}

	return sum / lenght ;

}
double calculate_geometrical_avg(int* array, int lenght) {
	double p = 1;
	for (int i = 0; i < lenght; i++) {
		p *= array[i];
	}

	return pow(p, 1.0 / lenght);
}