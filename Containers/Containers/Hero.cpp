#include "Hero.h"

Hero::Hero(std::string name, Ideology worldView, int initiative)
	: name_(name), worldView_(worldView), initiative_(initiative)
{}

std::string Hero::Name() const {
	return name_;
}
Ideology Hero::WorldView() const {
	return worldView_;
}


bool operator<(const Hero& lhs, const Hero& rhs) {
	if (lhs.initiative_ < rhs.initiative_)
		return true;
	return false;
}

std::ostream & operator << (std::ostream &out, const Hero& hero) {
	out << hero.name_ << "  " << hero.worldView_ << "  " << hero.initiative_;
	return out;
}