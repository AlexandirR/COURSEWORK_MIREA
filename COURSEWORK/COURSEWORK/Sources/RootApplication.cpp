#include "../Headers/BaseTree.h"
#include "../Headers/RootApplication.h"
#define SIGNAL_D(signal_f) ( ( void ( * ) ( string & ) ) ( &  (signal_f)  ) )
#define HANDLER_D(handler_f) ( ( void ( * ) ( BaseTree* , string & ) ) ( &  (handler_f)  ) ) 

using namespace std;

void RootApplication::BeginProcess() {
	this->SetAllSignals();
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> (BaseTree::field[i][j]);
		}
	}
}

int RootApplication::ExcApp() {
	for (; BaseTree::x < 9; ++(BaseTree::x)) {
		if ((downCheck->Check() + upCheck->Check() + rightCheck->Check() == 1) && BaseTree::field[x][y] == '1') {
			BaseTree::field[BaseTree::x][BaseTree::y] = 'F';
			break;
		}
	}
	while (true) {
		string command = "0";
		this->EmitSignal(SIGNAL_D(BaseTree::SignalStartStep), command);
	}
}

void RootApplication::SetAllSignals() {
	this->SetConnect(SIGNAL_D(BaseTree::SignalStartStep), downCheck, HANDLER_D(BaseTree::HandlerStartStep));
	this->SetConnect(SIGNAL_D(BaseTree::SignalStartStep), upCheck, HANDLER_D(BaseTree::HandlerStartStep));
	this->SetConnect(SIGNAL_D(BaseTree::SignalStartStep), rightCheck, HANDLER_D(BaseTree::HandlerStartStep));
	downCheck->SetConnect(SIGNAL_D(BaseTree::SignalCheck1), step, HANDLER_D(BaseTree::HandlerCheck1));
	downCheck->SetConnect(SIGNAL_D(BaseTree::SignalCheck2), out, HANDLER_D(BaseTree::HandlerCheck2));
	upCheck->SetConnect(SIGNAL_D(BaseTree::SignalCheck1), step, HANDLER_D(BaseTree::HandlerCheck1));
	upCheck->SetConnect(SIGNAL_D(BaseTree::SignalCheck2), out, HANDLER_D(BaseTree::HandlerCheck2));
	rightCheck->SetConnect(SIGNAL_D(BaseTree::SignalCheck1), step, HANDLER_D(BaseTree::HandlerCheck1));
	rightCheck->SetConnect(SIGNAL_D(BaseTree::SignalCheck2), out, HANDLER_D(BaseTree::HandlerCheck2));
}