#ifndef NOCARDINSERTEDEXEPTION_H_
#define NOCARDINSERTEDEXEPTION_H_

#include <exception>
using namespace std;

class NoCardInsertedExeption : public exception {
public:
	virtual const char* what() const throw () {
		return "No Card Inserted.";
	}
};

#endif /* NOCARDINSERTEDEXEPTION_H_ */