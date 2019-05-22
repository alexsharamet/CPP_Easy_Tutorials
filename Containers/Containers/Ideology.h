#pragma once
#include <string>
#include <iostream>

enum class Ideology {
	LawfulGood,
	NeutralGood,
	ChaoticGood,
	LawfulEvil,
	NeutralEvil,
	ChaoticEvil
};

std::string IdeologyCastToString(Ideology ideology);

std::ostream & operator << (std::ostream &out, const Ideology ideology);