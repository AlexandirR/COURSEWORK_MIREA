#ifndef FOURTHTREE_H
#define FOURTHTREE_H
#include <string>
#include <iostream>
#include "BaseTree.h"

class RightCheck : public BaseTree {
public:
	bool Check() {
		if (BaseTree::y + 1 <= 9)
			return (BaseTree::field[BaseTree::x][BaseTree::y + 1] == '1');
		return false;
	}
	std::string getDerection() {
		return "RIGHT";
	}
};
#endif