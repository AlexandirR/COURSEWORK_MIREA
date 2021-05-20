#ifndef ROOTAPPLICATION_H
#define ROOTAPPLICATION_H

#include "BaseTree.h"
#include "DownCheck.h"
#include "UpCheck.h"
#include "RightCheck.h"
#include "NextSteps.h"
#include "OutPutField.h"
class RootApplication : public BaseTree {
private:
	DownCheck* downCheck = new DownCheck();
	DownCheck* upCheck = new DownCheck();
	RightCheck* rightCheck = new RightCheck();
	NextSteps* step = new NextSteps();
	OutPutField* out = new OutPutField();

public:

	void BeginProcess();

	int ExcApp();

	void SetAllSignals();

	~RootApplication() {
		delete downCheck;
		delete upCheck;
		delete rightCheck;
		delete step;
		delete out;
	}
};
#endif