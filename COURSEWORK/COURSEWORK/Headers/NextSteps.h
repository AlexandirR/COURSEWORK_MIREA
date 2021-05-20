#ifndef FIVETREE_H
#define FIVETREE_H
#include <string>
#include <iostream>
#include "BaseTree.h"

class NextSteps : public BaseTree {
public:
	void NextStep(std::string command) {
		if (command == "UP")
			BaseTree::x -= 1;
		if (command == "RIGHT")
			BaseTree::y +=1 ;
		if (command == "DOWN")
			BaseTree::x += 1;
		BaseTree::field[BaseTree::x][BaseTree::y] = 'F';
	}
};
#endif