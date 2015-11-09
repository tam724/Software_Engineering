//Namen + Gruppenname
//Aufgabenblatt 1, Aufgabe 1.1

#ifndef NOTENOUGHMONEYEXEPTION_H_
#define NOTENOUGHMONEYEXEPTION_H_

#include <exception>
using namespace std;

class NotEnoughMoneyExeption : public exception {
public:
	virtual const char* what() const throw () {
		return "Not enough credit to withdraw money";
	}
};

#endif /* NOTENOUGHMONEYEXEPTION_H_ */