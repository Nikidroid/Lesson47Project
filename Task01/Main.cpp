#include <iostream>

using namespace std;

void random_init_price(int** prices, int dealer_count, int car_count);
string convert(int** prices, int dealer_count, int car_count, string* names);

int find_richest_dealership(int** prices, int dealership_count, int car_count);

int main() {
	string names[] = {"Super Dealer","AutoHouse","My Car","SuperCar"};
	int count_of_dealership = 4;
	int count_of_car;

	do {
		//system("cls");
		//cout << "Enter number of dealerships: ";
		//cin >> count_of_dealership;

		cout << "Enter number of cars: ";
		cin >> count_of_car;
	} while (/*count_of_dealership <= 0 ||*/ count_of_car <= 0);

	int** prices = new int* [count_of_dealership];

	for (int i = 0; i < count_of_dealership; i++) {
		*(prices + i) = new int[count_of_car];
	}
	
	random_init_price(prices, count_of_dealership, count_of_car);

	cout << convert(prices, count_of_dealership, count_of_car, names);

	cout << "Name of the richest dealership is " <<
		*(names + find_richest_dealership(prices, count_of_dealership, count_of_car)) << endl;

	for (int i = 0; i < count_of_dealership; i++) {
		delete[] *(prices + i);
	}
	delete[] prices;

	return 0;
}