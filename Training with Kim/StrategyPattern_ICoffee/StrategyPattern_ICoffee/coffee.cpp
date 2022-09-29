#include <list>
#include <iostream>
#define interface struct
//#define AMERICANO_PRICE = 2000;
//#define LATTE_PRICE = 3500;


// ICoffee �������̽�
interface ICoffee
{
public:
	// �����Լ� (�Լ� �߻�ȭ)
	virtual void add_option(int) = 0; // 500���� ���� �߰�
	virtual void pay() = 0; // �� ���� ����
};


class CoffeeBase : public ICoffee 
{
protected:
	char * m_name;
	int m_price;

public:
	// �����Լ� (�Լ� �߻�ȭ)
	virtual void add_option(int) = 0; // 500���� ���� �߰�
	virtual void pay() = 0; // �� ���� ����
};


// Americano Ŭ����
class Americano : public CoffeeBase
{
public:
	Americano() // ������
	{
		m_name = "Americano";
		m_price = 2000;
		std::cout << "Americano() Called" << std::endl;
	}
	~Americano() // �Ҹ���
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
	Latte() // ������
	{
		m_name = "Latte";
		m_price = 3500;
		std::cout << "Latte() Called" << std::endl;
	}
	~Latte() // �Ҹ���
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