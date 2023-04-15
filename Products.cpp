#include "Products.h"
#include <iostream>

void print_prod(const product& p) {
	std::cout << "Name of product: " << p.name << std::endl;
	std::cout << "Quantity of this product: " << p.number << std::endl;
	std::cout << "The price of this product: " << p.price << std::endl;
}

unsigned int full_price(const product& p) {
	return p.price * p.number;
}

void sell(product& p, unsigned int num_sell) {
	if (p.number <= num_sell)
		p.number = 0;
	else
		p.number -= num_sell;
}
