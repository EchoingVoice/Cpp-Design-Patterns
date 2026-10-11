//#include<iostream>
//#include<string>
//#include<vector>
//#include<memory>
//class AbstractMediator;
//class User:public std::enable_shared_from_this<User>//进阶用法
//{
//protected:
//	std::string m_name;
//	std::shared_ptr<AbstractMediator>m_mediator;
//public:
//	User(const std::string& name, std::shared_ptr<AbstractMediator>mediator) :m_name(name), m_mediator(mediator) {};
//	const std::string& getname()const { return m_name; }
//	virtual void Receive(const std::string& n, const std::string& name) = 0;
//	virtual void Send(const std::string& n) = 0;
//	virtual ~User() = default;
//};
//class AbstractMediator //抽象中介
//{
//public:
//	virtual void broadcast(const std::string&Info,std::shared_ptr<User>p ) = 0;
//	virtual void Adduser(std::shared_ptr<User>p) = 0;
//	virtual ~AbstractMediator() = default;
//};
//class  ConcreteMediator:public AbstractMediator
//{
//private:
//	std::vector<std::shared_ptr<User>>m_user;
//public:
//	void Adduser(std::shared_ptr<User>p)override
//	{
//		m_user.push_back(p);
//	}
//	void broadcast(const std::string&Info, std::shared_ptr<User>p)override
//	{
//		for (std::shared_ptr<User>& n: m_user)
//		{
//			if (n != p)
//			{
//				n->Receive(Info,p->getname());
//			}
//		}
//	}
//};
//class ConcreteColleague : public User
//{
//public:
//	ConcreteColleague(const std::string& name, std::shared_ptr<AbstractMediator>mediator) :User(name, mediator){};
//	void Send(const std::string& n)override
//	{
//		std::cout << "发送：" << n << "\n";
//		m_mediator->broadcast(n,shared_from_this());
//	}
//	void Receive(const std::string& msg, const std::string& from) override
//	{
//		std::cout << "  " << m_name << " 收到来自 " << from << " 的消息: " << msg << "\n";
//	}
//};
//int main()
//{
//	auto chatRoom = std::make_shared<ConcreteMediator>();
//
//	auto alice = std::make_shared<ConcreteColleague>("Alice", chatRoom);
//	auto bob = std::make_shared<ConcreteColleague>("Bob", chatRoom);
//	auto carol = std::make_shared<ConcreteColleague>("Carol", chatRoom);
//
//	chatRoom->Adduser(alice);
//	chatRoom->Adduser(bob);
//	chatRoom->Adduser(carol);
//
//	alice->Send("大家好！");
//	std::cout << "---\n";
//	bob->Send("欢迎！");
//
//	return 0;
//}