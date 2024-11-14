#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"


class ATarget;
class ASpell;

class Warlock{
private:
	std::string _name;
	std::string _title;
	SpellBook _spellBook;

	Warlock();
	Warlock(const Warlock &cp);
	Warlock &operator=(const Warlock &rhs);
public:
	Warlock(const std::string name, const std::string title);
	~Warlock();

	const std::string &getName()const;
	const std::string &getTitle()const;

	void setTitle(const std::string &title);

	void introduce()const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spell);
	void launchSpell(std::string spell, ATarget &target);



};



#endif
