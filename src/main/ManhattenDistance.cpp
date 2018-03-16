#include <cmath>

int manhattenDistance(int startX, int startY, int finishX, int finishY){
	return std::abs(startX - finishX) + std::abs(startY - finishY);
}

