#include "util.h"
#include "algorithm.h"
#define size 20

int main() {
	int array[size]{};
	
	//cout << "before array: " <<convert(array, size) << endl;
	init(array, size, -10, 10);
	cout << " array: " << convert(array, size) << endl;
	cout << "max value of array: " << get_max(array,size) << ".\n";
	cout << "min value of array: " << get_min(array, size) << ".\n";
	cout << "arithmetical average of array: " << calculate_arithmetical_avg(array, size) << ".\n";
	cout << "geometrical average of array: " << calculate_geometrical_avg(array, size) << ".\n";


	return 0;
}