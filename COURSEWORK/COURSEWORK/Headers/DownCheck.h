#ifndef SECONDTREE_H
#define SECONDTREE_H
#include <string>
#include <iostream>

#include "BaseTree.h"
class DownCheck : public BaseTree {
public:
	bool Check() {
		if (BaseTree::x + 1 <= 9)
			return (BaseTree::field[BaseTree::x + 1][BaseTree::y] == '1');
		return false;
	}

	std::string getDerection() {
		return "DOWN";
	}
};
#endif