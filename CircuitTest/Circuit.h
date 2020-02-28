#pragma once
#include <string>
#define	MAX_ARRAY_SIZE 2
using namespace std;


class Circuit
{
private:

	string* _resistance;
	
public:
	
	string* _resistance;
	
	
	
	Circuit() = default;
	
	Circuit(string resistance) {
		
		resistance = _resistance;
	};
	
	// Copy Construct
	Circuit(const Circuit&);
	
	//Assignment Operator

	Circuit& operator=(const Circuit&);


};

