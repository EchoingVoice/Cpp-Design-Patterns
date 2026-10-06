//#include<iostream>
//#include<memory>
//#include<string>
//using namespace std;
//class Computer
//{
//private:
//    string m_CPU = "";
//    string m_GPU = "";
//    string m_RAM = "";
//public:
//
//    void CPU(const string& CPU) { m_CPU = CPU; }
//    void GPU(const string& GPU) { m_GPU = GPU;}
//    void RAM(const string& RAM) { m_RAM = RAM;}
//    void show()
//    {
//        cout << "cpu:" << m_CPU << "  " << "gpu:" << m_GPU << "  " << "ram:" << m_RAM << endl;
//    }
//};
//class Builderbase
//{
//protected:
//    shared_ptr<Computer> p = make_shared<Computer>();
//public:
//    virtual void setcpu() = 0;
//    virtual void setgpu() = 0;
//    virtual void setram() = 0;
//    virtual shared_ptr<Computer> getResult() = 0;
//    virtual ~Builderbase() = default;
//};
//class Workingcomputer:public Builderbase
//{
//public:
//    void setcpu()override
//    {
//        p->CPU("i5 - 13400");
//    }
//    void setgpu()override
//    {
//        p->GPU("集成显卡");
//    }
//    void setram()override
//    {
//        p->RAM("16GB DDR4");
//    }
//    virtual shared_ptr<Computer> getResult()override { return p; }
//};
//class gamecomputer :public Builderbase
//{
//public:
//    void setcpu()override
//    {
//        p->CPU("i9 - 15400");
//    }
//    void setgpu()override
//    {
//        p->GPU("集成显卡2代");
//    }
//    void setram()override
//    {
//        p->RAM("32gb");
//    }
//    virtual shared_ptr<Computer> getResult()override { return p; }
//
//};
//class dr
//{
//public:
//    void Process(Builderbase*p1)
//    {
//        p1->setcpu();
//        p1->setgpu();
//        p1->setram();
//    }
//};
//
//int main(void)
//{
//    Workingcomputer mycom1;
//    dr dr1;
//    dr1.Process(&mycom1);
//    shared_ptr<Computer> mycomputer = mycom1.getResult();
//    mycomputer->show();
//    gamecomputer mycom2;
//    dr dr2;
//    dr2.Process(&mycom2);
//    shared_ptr<Computer> mycomputer2 = mycom2.getResult();
//    mycomputer2->show();
//	system("pause");
//}