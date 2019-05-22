#pragma once

#include <string>

#include "ideology.h"

class Hero
{
public:
	Hero(std::string name,Ideology worldView,int initiative);
	virtual ~Hero() = default;

	Hero(const Hero&) = default;
	Hero& operator=(const Hero&) = default;
	Hero(Hero&&) = default;
	Hero& operator=(Hero&&) = default;

	std::string Name() const;
	Ideology WorldView() const;
	
private:
	std::string name_;
	Ideology worldView_;
	int initiative_;

	friend bool operator<(const Hero& lhs, const Hero& rhs);
	friend std::ostream & operator << (std::ostream &out, const Hero& hero);
};

bool operator<(const Hero& lhs, const Hero& rhs);
std::ostream & operator << (std::ostream &out, const Hero& hero);
