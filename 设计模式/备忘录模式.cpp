//#include<iostream>
//#include<memory>
//#include<vector>
//class Memento
//{
//private:
//	friend class  Gamecharacter;
//	int m_hp;
//	int m_mp;
//	int m_location;
//	Memento(int hp, int mp, int location) :m_hp(hp), m_mp(mp), m_location(location) {};
//};
//class Gamecharacter
//{
//private:
//	int m_hp;
//	int m_mp;
//	int m_location;
//public:
//	Gamecharacter(int hp, int mp, int location) :m_hp(hp), m_mp(mp), m_location(location) {};
//	void changehp(int temp) 
//	{
//		m_hp += temp;
//		std::cout << "hp增加了" << temp <<std::endl;
//	}
//	void changemp(int temp) 
//	{
//		m_mp += temp; 
//		std::cout << "mp增加了" << temp << std::endl;
//	}
//	void move(int temp)
//	{
//		m_location += temp;
//		std:: cout<<"位置移动了"<<temp << std::endl;
//	}
//	std::shared_ptr<Memento> Save()
//	{
//		std::shared_ptr<Memento> p (new Memento(m_hp, m_mp, m_location));
//		return p;
//	}
//	void Lookback(std::shared_ptr<Memento>p)
//	{
//		this->m_hp = p->m_hp;
//		this->m_mp = p->m_mp;
//		this->m_location = p->m_location;
//		std::cout << "状态回溯了\n" << " hp= " << m_hp << " mp= " << m_mp << "位置变化到" << m_location << "\n";
//	}
//};
//class SaveManage
//{
//private:
//	std::vector<std::shared_ptr<Memento>> m_memento;
//public:
//	void Addsave(std::shared_ptr<Memento>p)
//	{
//		m_memento.push_back(p);
//	}
//	std::shared_ptr<Memento> FindSave(int index)
//	{
//		if (index >= 0 && index < m_memento.size())
//		{
//			return m_memento[index];
//		}
//		return nullptr;
//	}
//};
//int main()
//{
//	SaveManage SaveContorl;
//	Gamecharacter person1(100, 200, 0);
//	//新手福利血瓶
//	person1.changehp(50);
//	//前往森林
//	person1.move(1000);
//	//遭遇怪物 存档
//	auto save1 = person1.Save();
//	SaveContorl.Addsave(save1);
//	person1.changehp(-50);
//	person1.changemp(-100);
//	//打亏了 回溯重来
//	person1.Lookback(SaveContorl.FindSave(0));
//	person1.changehp(-20);
//	person1.changemp(-50);
//	std::cin.get();
//}