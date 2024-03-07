int sum_all_prices(int* dealership, int length) {
	int total = 0;

	for (int i = 0; i < length; i++) {
		total += *(dealership + i);
	}

	return total;
}

int find_richest_dealership(int** prices, int dealership_count, int car_count) {
	int index = 0;
	int max_price = sum_all_prices(*prices, car_count);

	for (int i = 0; i < dealership_count; i++) {
		int price = sum_all_prices(*(prices + i), car_count);
		if (price > max_price) {
			max_price = price;
			index = i;
		}
	}

	return index;
}