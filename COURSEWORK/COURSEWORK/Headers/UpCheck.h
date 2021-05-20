#ifndef FIRDTREE_H
#define FIRDTREE_H
#include <string>
#include <iostream>

#include "BaseTree.h"
class UpCheck : public BaseTree {
public:
	bool Check() {
		if (BaseTree::x - 1 >= 0)
			return (BaseTree::field[BaseTree::x - 1][BaseTree::y] == '1');
		return false;
	}

	std::string getDerection() {
		return "UP";
	}
};
#endif