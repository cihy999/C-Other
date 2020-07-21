#ifndef A_H
#define A_H

class B;	//forward declaration

class A {
public:
	enum class State
	{
		awake,
		sleep
	};
	A(State eState, B* pB);

private:
	B* m_pB;
	State m_eState;
};
#endif //A_H