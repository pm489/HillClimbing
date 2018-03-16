#include <iostream>
#include "../main/ManhattenDistance.cpp"

using namespace std;


void negativeDistance(){
	
	int distance = manhattenDistance(1,3,0,0);

	if(distance != 4)
	{ 
		cout << "Expected distance to be 4 but it was " << distance;
	}else{
		cout << "Tests Passed";
	}
};

void positiveDistance(){
	int distance = manhattenDistance(0,0,1,2);
	
	if(distance != 3)
	{ 
		cout << "Expected distance to be 3 but it was " << distance;
	}else{
		cout << "Tests Passed";
	}
};


int main()
{
	negativeDistance();	
	positiveDistance();	
}
