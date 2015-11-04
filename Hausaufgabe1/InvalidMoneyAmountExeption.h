#ifndef INVALIDMONEYAMOUNTEXEPTION_H_
#define INVALIDMONEYAMOUNTEXEPTION_H_

#include <exception>
using namespace std;

class InvalidMoneyAmountExeption : public exception {
public:
	virtual const char* what() const throw () {
		return "You can only deposit/withdraw more than 1 and a Maximum of 1000 Euro";
	}
};

#endif /* INVALIDMONEYAMOUNTEXEPTION_H_ */