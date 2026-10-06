//#include<iostream>
//#include<memory>
//#include<unordered_map>
//#include<string>
//using namespace std;
//class NPCAttribute
//{
//private:
//	float m_HP = 100.0f;
//	double m_Speed = 200.00;
//public:
//	NPCAttribute()=default;
//	NPCAttribute(float hp, double speed) :m_HP(hp), m_Speed(speed) {};
//	// 外部接收位置 
//	void show(float x, float y)const
//	{
//		cout << "血量" << m_HP << endl;
//		cout << "速度" << m_Speed << endl;
//		cout << "在x=" << x << "y=" << y << "绘制NPC" << endl;
//	}
//
//};
//class NPCFactory
//{
//private:
//	unordered_map<string, shared_ptr<NPCAttribute>>m_map;
//public:
//	shared_ptr<NPCAttribute> createNPC(const string& name, const string& text,float hp=100.0f,double Speed=200.00)
//	{
//		string key = name + "_"  + text + "_" + to_string(hp) + "_" + to_string(Speed);
//		auto it = m_map.find(key);
//		if (it != m_map.end())
//		{
//			return it->second;
//		}
//		else
//		{
//			shared_ptr<NPCAttribute> p = make_shared<NPCAttribute>(hp, Speed);
//			m_map[key] = p;
//			return p;
//		}
//	}
//};
//class NPC
//{
//private:
//	shared_ptr<NPCAttribute> p;
//	float m_x, m_y;
//	string m_name;
//public:
//	NPC(shared_ptr<NPCAttribute> n, float x, float y, const string& name) :p(n), m_x(x), m_y(y), m_name(name) {};
//	void draw()const
//	{
//		cout << "npc姓名：" << m_name << endl;
//		(*p).show(m_x,m_y);
//	}
//};
//int main()
//{
//	NPCFactory factory;
//
//	// 测试 1：默认属性
//	auto n1 = factory.createNPC("通用属性", "_19973");
//	NPC sfy(n1, 10, 10, "苏菲亚");
//	sfy.draw();
//
//	// 测试 2：同样的参数，验证是否复用
//	auto n2 = factory.createNPC("通用属性", "_19973");
//	cout << "两次获取的属性是同一个对象吗？"
//		<< (n1 == n2 ? "是" : "否") << endl;
//
//	// 测试 3：不同的属性，验证是否独立
//	auto n3 = factory.createNPC("Boss属性", "_Boss", 9999.0f, 500.0);
//	NPC boss(n3, 0, 0, "最终 Boss");
//	boss.draw();
//
//	cin.get();
//	return 0;
//}