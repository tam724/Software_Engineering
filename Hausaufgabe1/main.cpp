//nur zum testen, vor der Abgabe löschen

#include <iostream>
#include <exception>
#include <string>

using namespace std;

#include "PATM.h"
#include "PATM.cpp"

int main(){
		PATM automat;
		try{
			automat.insertCard();
			automat.depositMoney(40);
			automat.depositMoney(1000);
			automat.withdrawMoney(1.5);
			automat.withdrawCard();
		}
		catch(const exception &e){
			cout << e.what() <<endl;
		}
}