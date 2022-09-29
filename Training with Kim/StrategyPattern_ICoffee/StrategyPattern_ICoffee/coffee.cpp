#include <list>
#include <iostream>
#define interface struct
//#define AMERICANO_PRICE = 2000;
//#define LATTE_PRICE = 3500;


// ICoffee 인터페이스
interface ICoffee
{
public:
	// 가상함수 (함수 추상화)
	virtual void add_option(int) = 0; // 500원인 우유 추가
	virtual void pay() = 0; // 총 가격 지불
};


class CoffeeBase : public ICoffee 
{
protected:
	char * m_name;
	int m_price;

public:
	// 가상함수 (함수 추상화)
	virtual void add_option(int) = 0; // 500원인 우유 추가
	virtual void pay() = 0; // 총 가격 지불
};


// Americano 클래스
class Americano : public CoffeeBase
{
public:
	Americano() // 생성자
	{
		m_name = "Americano";
		m_price = 2000;
		std::cout << "Americano() Called" << std::endl;
	}
	~Americano() // 소멸자
	{
		std::cout << "~Americano() Called" << std::endl;
	}
	void CoffeeBase::add_option(int number) {
		m_price += (500 * number);
	}
	void CoffeeBase::pay() {
		std::cout << m_name << " price: " << m_price << std::endl;
	}
};



class Latte : CoffeeBase
{
public:
	Latte() // 생성자
	{
		m_name = "Latte";
		m_price = 3500;
		std::cout << "Latte() Called" << std::endl;
	}
	~Latte() // 소멸자
	{
		std::cout << "~Latte() Called" << std::endl;
	}
	void CoffeeBase::add_option(int number) {
		m_price += (500 * number);
	}
	void CoffeeBase::pay() {
		std::cout << m_name << " price: " << m_price << std::endl;
	}
};



int main() {

	Americano* am1 = new Americano();
	Latte* la1 = new Latte();
	std::cout << "------------------------------" << std::endl;
	am1->pay();
	am1->add_option(2);
	am1->pay();
	la1->add_option(1);
	la1->pay();
	std::cout << "------------------------------" << std::endl;
	delete am1;
	delete la1;

	
}