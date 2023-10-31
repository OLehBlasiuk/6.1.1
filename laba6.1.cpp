#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

const int arraysize = 25;

int Random_Number_Genaration(int min, int max) {
	return min + (rand() % (max - min + 1));
}

void great_array(int array[], int min, int max) {
	for (int i = 0; i < arraysize; i++)
		array[i] = Random_Number_Genaration(min, max);
}

void Summing_And_Count(const int array[], int& count, int& sum) {
	count = 0;
	sum = 0;
	for (int i = 0; i < arraysize; i++) {
		if (array[i] > 0 && i % 2 == 0) {
			count++;
			sum += array[i];
		}
	}
}

void Raplace_Elem_For_Zero(int array[]) {
	for (int i = 0; i < arraysize; i++) {
		if (array[i] > 0 && i % 2 == 0) {
			array[i] = 0;
		}
	}
}

int main() {
	srand(static_cast<unsigned int>(time(nullptr)));
	int Array[arraysize];
	great_array(Array, -20, 30);


	int count = 0;
	int sum = 0;

	for (int i = 0; i < arraysize; i++) {
		cout << Array[i] << " ";
	}
	cout << endl;

	Summing_And_Count(Array, count, sum);


	cout << "Count correct elem: " << count << endl;
	cout << "Sum correct elem: " << sum << endl;

	Raplace_Elem_For_Zero(Array);

	for (int i = 0; i < arraysize; i++) {
		cout << Array[i] << " ";
	}
	cout << endl;

	return 0;
}
