#include<iostream>
using namespace std;
int main()
{
  cout<<"hello worle!"<<endl;
  return 0;
}
#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物说话" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫说话" << endl;
	}
};

void dospeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	dospeak(cat);
}

int main()
{
	test01();
	return 0; 
}
