//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<memory>
//using namespace std;
//class Observer
//{
//public:
//	virtual void context(const string& n) = 0;
//	virtual~Observer() = default;
//};
//class observerlist
//{
//private:
//	vector<shared_ptr<Observer>> list1;
//public:
//	void addob(shared_ptr<Observer> o)
//	{
//		list1.push_back(o);
//	}
//	void deleteOnlyob(const shared_ptr<Observer>&o)
//	{
//		list1.erase(
//			remove(list1.begin(), list1.end(),o),
//			list1.end());
//	}
//	void Notice(const string &n)
//	{
//		for (shared_ptr<Observer> o : list1)
//		{
//			if (o)
//				o->context(n);
//		}
//	}
//};
//class adtiomusic:public Observer
//{
//public:
//	virtual void context(const string& n)override
//	{
//		if (n == "zombie die")
//			cout << "僵尸死亡音效" << endl;
//		else if (n == "plant die")
//			cout << "植物死亡音效" << endl;
//	}
//};
//class Coincount :public Observer
//{
//public:
//	virtual void context(const string& n)override
//	{
//		if (n == "zombie die")
//			cout << "coin+1!!" << endl;
//		else if (n == "plant die")
//			cout << "coin-1!!" << endl;
//	}
//};
//class zombie 
//{
//	
//private:
//	observerlist zombies;
//public:
//	void die()
//	{
//		zombies.Notice("zombie die");
//	}
//	void add(shared_ptr<Observer>o)
//	{
//		zombies.addob(o);
//	}
//	void deleteob(shared_ptr<Observer>o)
//	{
//		zombies.deleteOnlyob(o);
//	}
//};
//class plant 
//{
//
//private:
//	observerlist plants;
//public:
//	void die()
//	{
//		plants.Notice("plant die");
//	}
//	void add(shared_ptr<Observer>o)
//	{
//		plants.addob(o);
//	}
//	void deleteob(shared_ptr<Observer>o)
//	{
//		plants.deleteOnlyob(o);
//	}
//};
//int main()
//{
//	// 创建观察者
//	shared_ptr<Observer> audio = make_shared<adtiomusic>();
//	shared_ptr<Observer> coin = make_shared<Coincount>();
//
//	// 创建事件源
//	zombie z;
//	plant p;
//
//	// 订阅
//	z.add(audio);
//	z.add(coin);
//	p.add(audio);
//	p.add(coin);
//
//	// 触发事件
//	z.die();
//	cout << "--------" << endl;
//	p.die();
//
//	// 取消订阅
//	cout << "--------" << endl;
//	z.deleteob(audio);
//	z.die();   // audio 不再收到通知
//
//	return 0;
//}