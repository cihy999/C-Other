#ifndef B_H
#define B_H
#include "A.h"

class A;

class B {
public:
	void Tell(A::State eState);
};
#endif //B_H