#ifndef PATM_H_
#define PATM_H_

#include "Assertion.h"
#include "Assertion.cpp"

class PATM {
public:
	// Maximaler/Minimaler Wert, der gleichzeitig abgehoben bzw. hinzugefügt werden darf
	static const int MAX = 1000;
	static const int MIN = 1;

	PATM(double money = 0);

	void insertCard();
	void withdrawCard();
	void depositMoney(double money);
	void withdrawMoney(double money);

	bool cardInserted();
	bool isMoneyValid(double money);
	bool isEnoughDebit(double money);
	bool invariant();
private:
	double guthaben;
	bool card;
};

#endif /* PATM_H_ */