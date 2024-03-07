#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

void random_init_price(int** prices, int dealer_count, int car_count) {
	for (int i = 0; i < dealer_count; i++) {
		for (int j = 0; j < car_count; j++) {
			*(*(prices + i) + j) = rand() % 1000 * 100;
		}
	}
}

string convert(int** prices, int dealer_count, int car_count, string* names) {
	string s = "";

	for (int i = 0; i < dealer_count; i++) {
		s += *(names + i) + ": ";

		for (int j = 0; j < car_count; j++) {
			s += to_string(*(*(prices + i) + j)) + " ";
		}

		s += "\n";
	}

	return s;
}