#ifndef PATM_H_
#define PATM_H_


#include "MoreThanOneCardExeption.h"
#include "InvalidMoneyAmountExeption.h"
#include "NotEnoughMoneyExeption.h"
#include "NoCardInsertedExeption.h"

#include <exception>

class PATM {
public:
	// Maximaler/Minimaler Wert, der gleichzeitig abgehoben bzw. hinzugefügt werden darf
	static const int MAX = 1000;
	static const int MIN = 1;

	PATM(double money = 0);

	void insertCard() throw (MoreThanOneCardExeption);
	void withdrawCard() throw (NoCardInsertedExeption);
	void depositMoney(double money) throw (NoCardInsertedExeption, InvalidMoneyAmountExeption);
	void withdrawMoney(double money) throw (NoCardInsertedExeption, InvalidMoneyAmountExeption, NotEnoughMoneyExeption);

private:
	double guthaben;
	bool card;
};

#endif /* PATM_H_ */