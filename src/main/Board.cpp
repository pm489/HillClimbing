#include "ManhattenDistance.cpp"

using namespace std;

class SquareBoard{
	private:
		int boardSize;
		int* board;
	public:
		SquareBoard(int size){
			boardSize = size;
			board = new int[size*size]; 
		};
	int get(int x, int y){
		return board[x*boardSize+y];	
	};
	void put(int x, int y, int value){
		board[x*boardSize+y] = value;
	};
};
