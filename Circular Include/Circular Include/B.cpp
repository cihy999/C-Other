#include "B.h"
#include <iostream>

using namespace std;

void B::Tell(A::State eState)
{
	switch (eState)
	{
	case A::State::awake:
		cout << "I' m awake." << endl;
		break;
	case A::State::sleep:
		cout << "I'm sleeping." << endl;
		break;
	default:
		break;
	}
}