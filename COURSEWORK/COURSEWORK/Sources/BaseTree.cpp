#include "../Headers/BaseTree.h"
#define SIGNAL_D(signal_f) ( ( void ( * ) ( string & ) ) ( &  (signal_f)  ) )
#define HANDLER_D(handler_f) ( ( void ( * ) ( BaseTree* , string & ) ) ( &  (handler_f)  ) ) 

using namespace std;

void BaseTree::SetConnect(void (*SIgnal)(string&), BaseTree* object, void (*PHandler)(BaseTree* PPb, string&)) {
	connects.insert({ (int)(connects.size()), {SIgnal, {object, PHandler}} });
}

void BaseTree::EmitSignal(void (*Signal)(string&), string& Command) {
	for (auto c : connects) {
		if (c.second.first == Signal) {
			(c.second.second.second)(c.second.second.first, Command);
		}
	}
}

void BaseTree::HandlerStartStep(BaseTree* p_ob, string& Command) {
	string derection = p_ob->getDerection();
	if (p_ob->Check())
		p_ob->EmitSignal(SIGNAL_D(BaseTree::SignalCheck1), derection);
	else {
		if (Command == "0")
			Command = "1";
		else if (Command == "1")
			Command = "2";
		else if (Command == "2")
			Command = "3";
		else
			Command = "3";
	}
	p_ob->EmitSignal(SIGNAL_D(BaseTree::SignalCheck2), Command);
}

void BaseTree::HandlerCheck1(BaseTree* p_ob, string& Command) {
	p_ob->NextStep(Command);
}

void BaseTree::HandlerCheck2(BaseTree* p_ob, string& Command) {
	if (Command == "3") {
		p_ob->OutField();
		exit(0);
	}
}