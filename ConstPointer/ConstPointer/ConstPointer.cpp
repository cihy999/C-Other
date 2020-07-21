#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int another = 0;

    const int* pNum1 = &num;
    int* const pNum2 = &num;
    int const *pNum3 = &num;
    const int* const pNum4 = &num;

    cout << "num = " << num << ", another = " << another << endl;
    cout << "&num = " << &num << ", &another = " << &another << endl << endl;

    //*pNum1 = 10;    
    pNum1 = &another;   
    cout << "pNum1 不可以改變內容，所以 *pNum1 = " << *pNum1 << "；pNum1 可以改變指向位置，所以 pNum1 = " << pNum1 << endl;

    *pNum2 = 20;    
    //pNum2 = &another;
    cout << "pNum2 可以改變內容，所以 *pNum2 = " << *pNum2 << "；pNum2 不可以改變指向位置，所以 pNum2 = " << pNum2 << endl;

    //*pNum3 = 30;
    pNum3 = &another;
    cout << "pNum3 不可以改變內容，所以 *pNum3 = " << *pNum3 << "；pNum3 可以改變指向位置，所以 pNum3 = " << pNum3 << endl;

    //*pNum4 = 40;
    //pNum4 = &another;
    cout << "pNum4 不可以改變內容，所以 *pNum4 = " << *pNum3 << "；pNum4 不可以改變指向位置，所以 pNum4 = " << pNum4 << endl;
}