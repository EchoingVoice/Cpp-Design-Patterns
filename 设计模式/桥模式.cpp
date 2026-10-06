//#include<iostream>
//#include<string>
//#include<memory>
//using namespace std;
//class Color
//{
//public:
//	virtual string getcolor()=0;
//	virtual ~Color()=default;
//};
//class Shape
//{
//protected:
//	shared_ptr<Color>p= nullptr;
//public:
//	Shape(shared_ptr<Color> p1) :p(p1) {};
//	virtual void draw()=0;
//	virtual ~Shape() = default;
//};
//class red:public Color
//{
//public:
//	virtual string getcolor()override
//	{
//		return "红色";
//	}
//};
//class blue :public Color
//{
//public:
//	virtual string getcolor()override
//	{
//		return "蓝色";
//	}
//};
//class green :public Color
//{
//public:
//	virtual string getcolor()override
//	{
//		return "绿色";
//	}
//};
//class Rectangle:public Shape
//{
//public:
//	Rectangle(shared_ptr<Color> p1) :Shape(p1) {};
//	virtual void draw()override
//	{
//		cout << "画一个：" << p->getcolor() << "颜色的矩形" << endl;
//	}
//};
//class Circle :public Shape
//{
//public:
//	Circle(shared_ptr<Color> p1) :Shape(p1) {};
//	virtual void draw()override
//	{
//		cout << "画一个：" << p->getcolor() << "颜色的圆形" << endl;
//	}
//};
//class Triangle :public Shape
//{
//public:
//	Triangle(shared_ptr<Color> p1) :Shape(p1) {};
//	virtual void draw()override
//	{
//		cout << "画一个：" << p->getcolor() << "颜色的三角形" << endl;
//	}
//};
//int main()
//{
//	shared_ptr<Shape>p = (make_shared<Circle>(make_shared<red>()));
//	p->draw();
//	return 0;
//}