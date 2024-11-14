#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator(const TargetGenerator &cp){*this = cp;}
TargetGenerator &TargetGenerator::operator=(const TargetGenerator &rhs){
	_targetGen = rhs._targetGen;
	return *this;
}

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}


void TargetGenerator::learnTargetType(ATarget *target){
	if (target)
		_targetGen[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &target){
	if (_targetGen.find(target) != _targetGen.end()){
		delete _targetGen[target];
		_targetGen.erase(target);
	}
}


ATarget *TargetGenerator::createTarget(std::string const &target){
	ATarget *tmp = NULL;
	if (_targetGen.find(target) != _targetGen.end())
		tmp = _targetGen[target];
	return tmp;
}
