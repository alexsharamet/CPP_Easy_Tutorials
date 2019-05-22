#include "Ideology.h"

std::string IdeologyCastToString(Ideology ideology) {
	switch (ideology)
	{
	case Ideology::LawfulGood:
		return "LawfulGood";
	case Ideology::NeutralGood:
		return "NeutralGood";
	case Ideology::ChaoticGood:
		return "ChaoticGood";
	case Ideology::LawfulEvil:
		return "LawfulEvil";
	case Ideology::NeutralEvil:
		return "NeutralEvil";
	case Ideology::ChaoticEvil :
		return "ChaoticEvil";
	}

	return "";
}

std::ostream & operator << (std::ostream &out, const Ideology ideology) {
	out << IdeologyCastToString(ideology);
	return out;
}