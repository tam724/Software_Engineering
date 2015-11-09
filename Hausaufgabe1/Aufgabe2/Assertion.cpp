//Namen + Gruppenname
//Aufgabenblatt 1, Aufgabe 1.2 b

#include "Assertion.h"

void Assertion::require(bool expr, string what) throw(PreconditionException) {
	if (!expr) {
		throw PreconditionException(what);
	}
}

void Assertion::require(bool expr) throw(PreconditionException) {
	if (!expr) {
		throw PreconditionException("");
	}
}

void Assertion::ensure(bool expr, string what) throw(PostconditionException) {
	if (!expr) {
		throw PostconditionException(what);
	}
}

void Assertion::ensure(bool expr) throw(PostconditionException) {
	if (!expr) {
		throw PostconditionException("");
	}
}
