#ifndef MORETHANONECARDEXEPTION_H_
#define MORETHANONECARDEXEPTION_H_

#include <exception>
using namespace std;

class MoreThanOneCardExeption : public exception {
public:
	virtual const char* what() const throw () {
		return "A Card is already inserted";
	}
};

#endif /* MORETHANONECARDEXEPTION_H_ */