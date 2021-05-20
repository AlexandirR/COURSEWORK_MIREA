#ifndef BASETREE_H
#define BASETREE_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>
#include <utility>
#include <map>
#include <set>

using namespace std;

class BaseTree {
protected:
	static char field[10][10];
	static int x;
	static int y;
	pair <BaseTree*, void (*)(BaseTree* p_ob, string&)> connect;
	set < pair <int, pair < void (*) (string&), pair <BaseTree*, void (*)(BaseTree* p_ob, string&)> > > > connects;
public:

	virtual bool Check() { return true; }

	virtual void NextStep(string command) {}

	virtual void OutField() {}

	virtual string getDerection() { return ""; }

	static void SignalStartStep(string&) {}

	static void SignalCheck1(string&) {}

	static void SignalCheck2(string&) {}

	void SetConnect(void (*SIgnal)(string&), BaseTree* object, void (*PHandler)(BaseTree* PPb, string&));

	void EmitSignal(void (*SIgnal)(string&), string& Command);

	static void HandlerStartStep(BaseTree* p_ob, string& Command);

	static void HandlerCheck1(BaseTree* p_ob, string& Command);

	static void HandlerCheck2(BaseTree* p_ob, string& Command);
};

#endif