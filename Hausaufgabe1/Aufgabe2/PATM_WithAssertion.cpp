#include "PATM_WithAssertion.h"

PATM::PATM(double money){
	this->guthaben = money;
	this->card = false;
	
	Assertion::ensure(this->invariant(),
		"The invariant should hold at all time.");
}

void PATM::insertCard(){
	Assertion::require(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::require(!this->cardInserted(),
		"Card already inserted.");
	
	this->card = true;
	
	Assertion::ensure(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::ensure(this->cardInserted(),
		"There should be a card inserted.");
}

void PATM::withdrawCard(){
	Assertion::require(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::require(this->cardInserted(),
		"There is no Card inserted.");
	
	this->card = false;
	
		
	Assertion::ensure(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::ensure(!this->cardInserted(),
		"There should be a Card inserted.");
}

void PATM::depositMoney(double money){
	Assertion::require(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::require(this->cardInserted(),
		"There is no Card inserted.");
	Assertion::require(this->isMoneyValid(money),
		"You can only deposit more than 1 and a Maximum of 1000 Euro.");
	
	this->guthaben = this->guthaben + money;
	
	Assertion::ensure(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::ensure(this->cardInserted(),
		"There should be a Card inserted.");
}

void PATM::withdrawMoney(double money){
	Assertion::require(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::require(this->cardInserted(),
		"There is no Card inserted.");
	Assertion::require(this->isMoneyValid(money),
		"You can only withdraw more than 1 and a Maximum of 1000 Euro.");
	Assertion::require(this->isEnoughDebit(money),
		"Not enough debit to withdraw money.");
		
	this->guthaben = this->guthaben - money;
	
	Assertion::ensure(this->invariant(),
		"The invariant should hold at all time.");
	Assertion::ensure(this->cardInserted(),
		"There should be a Card inserted.");
}

bool PATM::cardInserted(){
	return this->card;
}

bool PATM::isMoneyValid(double money){
	return ((money >= 1) && (money <= 1000));
}

bool PATM::isEnoughDebit(double money){
	return ((this->guthaben-money)>0);
}

bool PATM::invariant(){
	return (guthaben >= 0);
}