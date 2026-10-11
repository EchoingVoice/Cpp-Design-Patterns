//#include<iostream>
//#include<memory>
//#include<string>
//class OldAudio
//{
//public:
//	virtual void Play(const char* bgm)=0;
//    virtual ~OldAudio() = default;
//};
//class NewAudio
//{
//public:
//	virtual void Plays(const std::string& bgm,int a) = 0;
//	virtual ~NewAudio() = default;
//};
////class OldDataDase :public OldAudio
////{
////public:
////	virtual void Play(const char* bgm)override
////	{
////		std::cout << "老音频库播放：" << bgm << "\n";
////	}
////};
//class NewDataDase :public NewAudio
//{
//public:
//	virtual void Plays(const std::string& bgm,int a)override
//	{
//		std::cout << "新音频库播放：" << bgm << "\n";
//		std::cout << "音量" << a << "\n";
//	}
//};
//class Adapter :public OldAudio//客户端用谁继承谁
//{
//private:
//	std::shared_ptr< NewDataDase> m_newaudio;//被适配者
//public:
//	Adapter() :m_newaudio(std::make_shared< NewDataDase> ()) {};
//	virtual void Play(const char* bgm)override
//	{
//		m_newaudio->Plays(std::string(bgm),100);//由新版本才能运行的包装成旧版本能运行的 play是旧版本函数他包含新版本函数;
//	}
//};
////客户端 只用旧接口
//void Audiobegin(OldAudio* audio)
//{
//	audio->Play("bgm");
//}
//int main()
//{
//	OldAudio* p = new Adapter();
//	p->Play("bgm");
//	delete p;
//	std::cin.get();
//}