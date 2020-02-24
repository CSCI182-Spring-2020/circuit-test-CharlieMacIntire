#pragma once
#define	MAX_ARRAY_SIZE 2
using namespace std;


class Circuit
{
private:


	
public:
	

	
	~Circuit();
	Circuit() = default;
	
	Circuit(int arrayOne[], int arrayTwo[]);
	//I get an error when I make this an array of 3 values, so i made four
	int arrayOne[3] = { 1, 2, 3};
	int arrayTwo[3] = { 1, 2, 3};
	
	
};

