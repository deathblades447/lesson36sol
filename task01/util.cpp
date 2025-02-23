#include "util.h"


void init(int* array, int lenght,int a, int b) {
	for (int i = 0; i < lenght; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}
}


string convert(int* array, int lenght) {
	string s = " ";
	for (int i = 0; i < lenght; i++) {
		s += to_string(array[i]) + " ";

	}

	return s;
	 
}
