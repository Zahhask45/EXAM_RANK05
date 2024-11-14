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
	if (spell)
		_spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell){
	if (_spellBook.find(spell) != _spellBook.end()){
		delete _spellBook[spell];
		_spellBook.erase(spell);
	}
}

void Warlock::launchSpell(std::string spell, ATarget &target){
	if (_spellBook.find(spell) != _spellBook.end())
		_spellBook[spell]->launch(target);
}



