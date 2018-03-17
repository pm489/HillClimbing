#include <iostream>
#include "../main/Board.cpp"

using namespace std;

void canConstructBoard(){
	SquareBoard actual = SquareBoard(3);
	if(actual.get(0,0) != 0 ){cout << "square 0,0 should have been 0 but was: " <<actual.get(0,0);}else{cout<< "Test Passed";}
}

void canAddSquaresToBoard(){
	SquareBoard actual = SquareBoard(3);
	actual.put(0,0,5);
	if(actual.get(0,0) != 5){cout << "square 0,0 should have been 5 but was: "<< actual.get(0,0);}else{cout<<"Test Passed";}
}

int main(){
	canConstructBoard();
	canAddSquaresToBoard();	
}
