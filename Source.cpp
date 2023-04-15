#include <iostream>
#include "Products.h"

int main() {
	product p1{ "Bread", 20, 31 };

	print_prod(p1);

	std::cout << "Total price for the whole product " << p1.name << ": " << full_price(p1) << std::endl;

	sell(p1, 15);

	print_prod(p1);

	return 0;
}