#include <iostream>
using namespace std;

class Chef1
{
public:
	Chef1();
	~Chef1();

    void Cook(bool isTomatoPrepared, bool isEggPrepared, bool isOilPrepared);

private:

};

Chef1::Chef1() {}

Chef1::~Chef1() {}

void Chef1::Cook(bool isTomatoPrepared, bool isEggPrepared, bool isOilPrepared)
{
    if (!isTomatoPrepared) return;
    if (!isEggPrepared) return;
    if (!isOilPrepared) return;

    cout << "Chef1 Cook!" << endl;
}

const int INGREDIENT_DONE = 7;

class Chef2
{
public:
	Chef2();
	~Chef2();

    enum Ingredient
    {
        Tomato = 1,
        Egg = 2,
        Oil = 4,
    };
    void AddIngredient(Ingredient eIngredient);
    void RemoveIngredient(Ingredient eIngredient);

    void Cook();

private:
    int m_nPrepared;
    int m_Done;
};

Chef2::Chef2() 
{
    m_nPrepared = 0;
}

Chef2::~Chef2() {}

void Chef2::AddIngredient(Ingredient eIngredient)
{
    m_nPrepared = m_nPrepared | int(eIngredient);
}

void Chef2::RemoveIngredient(Ingredient eIngredient) 
{
    m_nPrepared = m_nPrepared & ~int(eIngredient);
}

void Chef2::Cook()
{
    if ((m_nPrepared & INGREDIENT_DONE) != INGREDIENT_DONE) return;

    cout << "Chef2 Cook!" << endl;
}

int main()
{
    Chef1* c1 = new Chef1();
    c1->Cook(true, true, true);

    Chef2* c2 = new Chef2();
    c2->AddIngredient(Chef2::Tomato);
    c2->AddIngredient(Chef2::Egg);
    c2->AddIngredient(Chef2::Oil);
    c2->Cook();
}