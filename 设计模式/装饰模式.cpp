//#include<iostream>
//#include<memory>
//using namespace std;
//class tea
//{
//public:
//	virtual string stuff() = 0;
//	virtual double money() = 0;
//	virtual~tea() = default;
//};
//class basictea:public tea
//{
//public:
//	virtual string stuff()override { return "basic tea"; }
//	virtual double money()override { return 10.00; }
//};
//class addsuffs:public tea
//{
//protected:
//	shared_ptr<tea> teas = nullptr;
//public:
//	addsuffs(shared_ptr<tea>p) :teas(p) {};
//};
//class Pearl:public addsuffs
//{
//public:
//	Pearl(shared_ptr<tea>p) :addsuffs(p) {};
//	virtual string stuff()override { return teas->stuff() + "+Pearl"; }
//	virtual double money()override { return teas->money() + 1.50; }
//};
//class milkfoam :public addsuffs
//{
//public:
//	milkfoam(shared_ptr<tea>p) :addsuffs(p) {};
//	virtual string stuff()override { return teas->stuff() + "+milkfoam"; }
//	virtual double money()override { return teas->money() + 3.00; }
//};
//class coconut :public addsuffs
//{
//public:
//	coconut(shared_ptr<tea>p) :addsuffs(p) {};
//	virtual string stuff()override { return teas->stuff() + "+coconut"; }
//	virtual double money()override { return teas->money() + 2.00; }
//};
//	int main()
//	{
//		// 基础奶茶
//		shared_ptr<tea> t = make_shared<basictea>();
//		cout << t->stuff() << " 价格：" << t->money() << endl;
//
//		// 加珍珠
//		t = make_shared<Pearl>(t);
//		cout << t->stuff() << " 价格：" << t->money() << endl;
//
//		// 加奶盖
//		t = make_shared<milkfoam>(t);
//		cout << t->stuff() << " 价格：" << t->money() << endl;
//
//		// 加椰果
//		t = make_shared<coconut>(t);
//		cout << t->stuff() << " 价格：" << t->money() << endl;
//
//		return 0;
//	}