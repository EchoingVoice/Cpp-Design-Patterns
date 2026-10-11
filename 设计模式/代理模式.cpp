//#include<iostream>
//#include<memory>
//#include<string>
//class IMAGE
//{
//public:
//	virtual void show() = 0;
//	virtual ~IMAGE() = default;
//};
//class RealImage :public IMAGE
//{
//private:
//	std::string m_name;
//public:
//	RealImage(const std::string& name) :m_name(name) {
//		std::cout << "加载图片\n";
//	};
//	virtual void show()override
//	{
//		std::cout << "显示图片：" << m_name << std::endl;
//	}
//};
//class ProxtImage :public IMAGE
//{
//private:
//	std::unique_ptr<IMAGE> m_realimage = nullptr;
//	std::string m_name;
//	bool Permission;
//public:
//	ProxtImage(const std::string& name, bool permission) :m_name(name), Permission(permission) {};
//	virtual void show()override
//	{
//		if (!Permission)
//		{
//			std::cout << "无权访问" << m_name << "\n";
//			return;
//		}
//		if (m_realimage == nullptr)
//		{
//			m_realimage = std::make_unique<RealImage>(m_name);
//		}
//		m_realimage->show();
//	}
//};
//int main(void)
//{
//	ProxtImage img1("格陵兰岛", true);
//	ProxtImage img2("china", false);
//	//第一次
//	img1.show();
//	//第二次;
//	img1.show();
//	//权限为false ;
//	img2.show();
//	std::cin.get();
//}