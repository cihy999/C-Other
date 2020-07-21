#include "a.h"
#include "b.h"

int main() 
{
	A::State eState = A::State::sleep;

	B b = new b();
	A a(eState, &b);
	b.Tell(eState);
}