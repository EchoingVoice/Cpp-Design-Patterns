//#include<iostream>
//#include<memory>
//#include<string>
//class Character;
//class Status
//{
//public:
//	virtual void Move(std::shared_ptr<Character>job1) = 0;
//	virtual std::string getname() = 0;
//	virtual ~Status() = default;
//};
//class Normal :public Status
//{
//public:
//	virtual void Move(std::shared_ptr<Character> job1);
//	std::string getname()override { return "正常状态"; };
//};
//class Injured :public Status
//{
//public:
//	virtual void Move(std::shared_ptr<Character> job1);
//	std::string getname()override{return "受伤状态";};
//};
//class Fainted :public Status
//{
//public:
//	virtual void Move(std::shared_ptr<Character> job1);
//	 std::string getname()override  { return "晕倒状态"; };
//};
//class Character :public std::enable_shared_from_this<Character>
//{
//private:
//	std::string m_name;
//	std::shared_ptr<Status> m_status;
//public:
//	Character(const std::string& name, std::shared_ptr<Status>job1 = nullptr) :m_name(name), m_status(job1)
//	{
//		m_status = job1 ? job1 : std::make_shared<Normal>();
//	}
//	void Move()
//	{
//		m_status->Move(shared_from_this());
//	}
//	void StatusChange(std::shared_ptr<Status> job1)
//	{
//		if (job1 != nullptr)
//		{
//			m_status = job1;
//			std::cout << "状态切换到：" << job1->getname() << '\n';
//		}
//		else
//		{
//			std::cout << "未知命令\n";
//		}
//	}
//	const std::string& Getname()const { return m_name; };
//};
//void Normal::Move(std::shared_ptr<Character> job1)
//{
//	std::cout << job1->Getname() << "正常状态下 速度100%！！\n";
//}
//
//void Injured::Move(std::shared_ptr<Character> job1)
//{
//	std::cout << job1->Getname() << "受伤状态下 速度30%！！\n";
//}
//
//void Fainted::Move(std::shared_ptr<Character> job1)
//{
//	std::cout << job1->Getname() << "晕倒状态下 速度0%！！\n";
//}
//int main(void)
//{
//	auto injured = std::make_shared<Injured>();
//	auto fainted = std::make_shared<Fainted>();
//	auto character = std::make_shared<Character>("苏菲亚");
//	character->Move();
//	character->StatusChange(injured);
//	character->Move();
//	character->StatusChange(fainted);
//	character->Move();
//	std::cin.get();
//}