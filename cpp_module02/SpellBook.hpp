#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"


class ASpell;

class SpellBook{
private:
	std::map<std::string, ASpell *> _spellBook;
	SpellBook(const SpellBook &cp);
	SpellBook &operator=(const SpellBook &rhs);
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell *createSpell(std::string const &spell);

};


#endif
