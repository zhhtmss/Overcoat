#ifndef OVERCOAT_H
#define OVERCOAT_H

#define MAX_TYPE_LENGTH 50
class Overcoat {
	char type[MAX_TYPE_LENGTH];
	double price;
	int size;
public:
	Overcoat(const char* type, double price, int size);

	bool operator==(const Overcoat& other);
	Overcoat& operator=(const Overcoat& other);
	bool operator>(const Overcoat& other);

	char* getType();
	double getPrice();
	int getSize();
};

#endif // OVERCOAT_H

