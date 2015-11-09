//nur zum testen, vor der Abgabe löschen

#include <iostream>
#include <exception>
#include <string>

using namespace std;

#include "PATM_WithAssertion.h"
#include "PATM_WithAssertion.cpp"

int main(){
		PATM automat;
		try{
			automat.insertCard();
			automat.depositMoney(40);
			automat.depositMoney(100);
			automat.withdrawMoney(0.5);
			automat.withdrawMoney(100);
			automat.withdrawCard();
		}
		catch(const exception &e){
			cout << e.what() <<endl;
		}
}