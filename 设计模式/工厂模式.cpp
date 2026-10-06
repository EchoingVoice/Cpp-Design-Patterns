#include<iostream>
#include<memory>
using namespace std;

#if 0
class Stuff
{
public:
	virtual void show() = 0;
	virtual ~Stuff() = default;
};
class zomble:public Stuff
{
public:
	virtual void show()override
	{
		cout << "I is a zomble" << endl;
	}
};
class plant :public Stuff
{
public:
	virtual void show()override
	{
		cout << "I is a plant" << endl;
	}

};
class buff :public Stuff
{
public:
	virtual void show()override
	{
		cout << "I is a buff" << endl;
	}
};
class Factory
{
public:
	virtual shared_ptr<Stuff>Create() = 0;
	virtual ~Factory() = default;
};
class zombleFactory :public Factory
{
public:
	virtual shared_ptr<Stuff>Create()override
	{
		return make_shared<zomble>();
	}
};
class plantFactory :public Factory
{
public:
	virtual shared_ptr<Stuff>Create()override
	{
		return make_shared<plant>();
	}
};
class buffFactory :public Factory
{
public:
	virtual shared_ptr<Stuff>Create()override
	{
		return make_shared<buff>();
	}
};
void test()
{

	shared_ptr<Factory> p = make_shared<zombleFactory>();
	shared_ptr<Stuff> p2 = p->Create();
	p2->show();
}
#endif
//抽象工厂
#if 0
class Soldier
{
public:
	virtual void show() = 0;
	virtual ~Soldier() = default;
};
class personsoldier:public Soldier
{
public:
	virtual void show()override
	{
		cout << "I is a personsoldier" << endl;
	}
};
class bugsoldier :public Soldier
{
public:
	virtual void show()override
	{
		cout << "I is a  bugsoldier" << endl;
	}
};
class Toke
{
public:
	virtual void show() = 0;
	virtual ~Toke() = default;
};
class personToke :public Toke
{
public:
	virtual void show()override
	{
		cout << "I is a personToke" << endl;
	}
};
class bugToke :public Toke
{
public:
	virtual void show()override
	{
		cout << "I is a bugToke" << endl;
	}
};
class Plant
{
public:
	virtual void show() = 0;
	virtual ~Plant() = default;
};
class personplant :public Plant
{
public:
	virtual void show()override
	{
		cout << "I is a personplant" << endl;
	}
};
class bugplant :public Plant
{
public:
	virtual void show()override
	{
		cout << "I is a bugplant" << endl;
	}
};
class Factory
{
public:
	virtual shared_ptr<Soldier> creatsolider() = 0;
	virtual shared_ptr<Toke> creatToke() = 0;
	virtual shared_ptr<Plant> creatPlant() = 0;
	virtual ~Factory() = default;
};
class personFactory:public Factory
{
public:
	virtual shared_ptr<Soldier> creatsolider()override
	{
		return make_shared<personsoldier>();
	}
	virtual shared_ptr<Toke> creatToke()override
	{
		return make_shared<personToke>();
	}
	virtual shared_ptr<Plant> creatPlant()override
	{
		return make_shared<personplant>();
	}
};
class bugFactory :public Factory
{
public:
	virtual shared_ptr<Soldier> creatsolider()override
	{
		return make_shared<bugsoldier>();
	}
	virtual shared_ptr<Toke> creatToke()override
	{
		return make_shared<bugToke>();
	}
	virtual shared_ptr<Plant> creatPlant()override
	{
		return make_shared<bugplant>();
	}
};
int main(void)
{
	shared_ptr<Factory> human = make_shared<personFactory>();
	auto s1 = human->creatsolider();
	auto t1 = human->creatToke();
	auto p1 = human->creatPlant();
	s1->show();
	t1->show();
	p1->show();

	cout << "--------" << endl;

	// 虫族工厂
	shared_ptr<Factory> bug = make_shared<bugFactory>();
	auto s2 = bug->creatsolider();
	auto t2 = bug->creatToke();
	auto p2 = bug->creatPlant();
	s2->show();
	t2->show();
	p2->show();
	system("pause");
}
#endif