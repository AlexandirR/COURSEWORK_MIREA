#ifndef SIXTREE_H
#define SIXTREE_H

#include "BaseTree.h"
#include <iostream>

class OutPutField : public BaseTree {
public:
	void OutField() {
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 10; ++j) {
				std::cout << BaseTree::field[i][j];
			}
			if (i != 9)
				std::cout << endl;
		}
	}
};
#endif