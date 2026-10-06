//#include<iostream>
//#include<string>
//#include<memory>
//using namespace std;
//class GameControl
//{
//private:
//	GameControl() = default;
//	GameControl(const GameControl& p) = delete;
//	GameControl& operator=(const GameControl& p) = delete;
//	~GameControl() = default;
//	//游戏属性；
//	double m_hp = 100;
//public:
//	void addhp(double n)
//	{
//		m_hp += n;
//	}
//	double gethp()const
//	{
//		return m_hp;
//	}
//	static GameControl& getInstance()
//	{
//		static GameControl instance;   
//		return instance;
//	}
//	
//};
//int main()
//{
//	GameControl& gm1 = GameControl::getInstance();
//	gm1.addhp(50);
//
//	GameControl& gm2 = GameControl::getInstance();
//	gm2.addhp(30);
//
//	cout << "当前血量：" << gm1.gethp() << endl;   // 180
//	cout << "是同一个对象吗？" << (&gm1 == &gm2 ? "是" : "否") << endl;
//
//	return 0;
//}