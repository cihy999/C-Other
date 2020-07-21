#include "A.h"

A::A(A::State eState, B* pB) 
{
	m_eState = eState;
	m_pB = pB;
}