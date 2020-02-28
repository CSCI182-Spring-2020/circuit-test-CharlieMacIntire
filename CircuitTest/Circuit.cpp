#include "Circuit.h"
#include <string>
using namespace std;

Circuit::Circuit(string resistance)
{
	
};

Circuit::Circuit(const Circuit& oldCircuit) {
	_resistance = new string(oldCircuit._resistance->c_str());
}

Circuit& Circuit::operator=(const Circuit& oldCircuit) {
	_resistance = new string(oldCircuit._resistance->c_str());
	return *this;
}