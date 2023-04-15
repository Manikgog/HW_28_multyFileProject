#pragma once
#include <string>

struct product {
	std::string name;
	unsigned int number = 0;
	unsigned int price;
};

void print_prod(const product& p);

unsigned int full_price(const product& p);

void sell(product& p, unsigned int num_sell);

