#include "Overcoat.h"
#include <cstring>

Overcoat::Overcoat(const char* type, double price, int size) {
	strncpy_s(this->type, type, MAX_TYPE_LENGTH - 1);
	this->type[MAX_TYPE_LENGTH - 1] = '\0';
	this->price = price;
	this->size = size;
}

bool Overcoat::operator==(const Overcoat& other) {
	return strcmp(this->type, other.type);
}

Overcoat& Overcoat::operator=(const Overcoat& other) {
	if (this != &other) {
		strncpy_s(this->type, other.type, MAX_TYPE_LENGTH - 1);
		this->type[MAX_TYPE_LENGTH - 1] = '\0';
		this->price = other.price;
		this->size = other.size;
	}
	return *this;
}

bool Overcoat::operator>(const Overcoat& other) {
	if (this->price > other.price) {
		return true;
	}
	else if (this->price == other.price) {
		return this->size > other.size;
	}
	return false;
}

char* Overcoat::getType() {
	return this->type;
}

double Overcoat::getPrice() {
	return this->price;
}

int Overcoat::getSize() {
	return this->size;
}