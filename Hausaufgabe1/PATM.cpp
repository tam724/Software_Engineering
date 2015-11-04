#include "PATM.h"
#include <exception>
	
	PATM::PATM(double money){
		this->guthaben = money;
		this->card = false;
	}

	void PATM::insertCard() throw(MoreThanOneCardExeption) {
		if (!this->card) {
			this->card = true;
		}
		else {
			throw MoreThanOneCardExeption();
		}
	}

	void PATM::withdrawCard() throw(NoCardInsertedExeption) {
		if (this->card) {
			this->card = false;
		}
		else {
			throw NoCardInsertedExeption();
		}
	}

	void PATM::depositMoney(double money) throw (NoCardInsertedExeption, InvalidMoneyAmountExeption) {
		if (this->card) {
			if ((money > MIN) && (money < MAX)) {
				guthaben = guthaben + money;
			}
			else {
				throw InvalidMoneyAmountExeption();
			}
		}
		else {
			throw NoCardInsertedExeption();
		}
	}

	void PATM::withdrawMoney(double money) throw (NoCardInsertedExeption, InvalidMoneyAmountExeption, NotEnoughMoneyExeption) {
		if (this->card) {
			if (money > MIN) {
				if ((guthaben - money) > 0) {
					guthaben = guthaben - money;
				}
				else {
					throw NotEnoughMoneyExeption();
				}
			}
			else {
				throw InvalidMoneyAmountExeption();
			}
		}
		else {
			throw NoCardInsertedExeption();
		}
	}