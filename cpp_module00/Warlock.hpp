#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>

class Warlock{
private:
	std::string _name;
	std::string _title;

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
};



#endif
