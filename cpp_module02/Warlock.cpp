#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(const Warlock &cp){*this = cp;}

Warlock &Warlock::operator=(const Warlock &rhs){
	_name = rhs._name;
	_title = rhs._title;
	return *this;
}

Warlock::Warlock(const std::string name, const std::string title):_name(name), _title(title){
	std::cout << _name <<  ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!" << std::endl;
}


const std::string &Warlock::getName()const{
	return _name;
}

const std::string &Warlock::getTitle()const{
        return _title;
}

void Warlock::setTitle(const std::string &title){
	_title = title;
}


void Warlock::introduce()const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell){
	_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell){
	_spellBook.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget &target){
	if (_spellBook.createSpell(spell))
		_spellBook.createSpell(spell)->launch(target);
}



