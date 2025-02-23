void reverse(int* array, int lenght) {
	int n = lenght / 2;
	for (int i = 0; i < n; i++) {
		int t = array[i];
		array[i] = array[lenght - 1 - i];
		array[lenght - 1 - i] = t;
	}


}