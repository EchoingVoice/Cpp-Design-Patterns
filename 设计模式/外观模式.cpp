//#include<iostream>
//#include<string>
//using std::cout;
//using std::endl;
//using std::string;
//
//class AudioSystem
//{
//public:
//	void init() { cout << "[音频] 初始化" << endl; }
//	void setVolume(int v) { cout << "[音频] 音量设置为 " << v << endl; }
//	void playBGM() { cout << "[音频] 播放背景音乐" << endl; }
//};
//
//// ========== 子系统 2：图形 ==========
//class GraphicsSystem
//{
//public:
//	void init() { cout << "[图形] 初始化" << endl; }
//	void setResolution(int w, int h) { cout << "[图形] 分辨率 " << w << "x" << h << endl; }
//	void loadShaders() { cout << "[图形] 加载着色器" << endl; }
//};
//
//// ========== 子系统 3：网络 ==========
//class NetworkSystem
//{
//public:
//	void init() { cout << "[网络] 初始化" << endl; }
//	void connect(const string& server) { cout << "[网络] 连接 " << server << endl; }
//};
//
//// ========== 子系统 4：物理 ==========
//class PhysicsSystem
//{
//public:
//	void init() { cout << "[物理] 初始化" << endl; }
//	void setGravity(float g) { cout << "[物理] 重力 " << g << endl; }
//};
//class GameFacade
//{
//private:
//	AudioSystem a;
//	GraphicsSystem b;
//	NetworkSystem c;
//	PhysicsSystem d;
//	GameFacade() = default;
//	GameFacade(const GameFacade& n) = delete;
//	GameFacade& operator=(const GameFacade& p) = delete;
//    ~GameFacade() = default;
//public:
//	static GameFacade& getInstance()
//	{
//		static GameFacade instance;
//		return instance;
//	}
//    void startGame()
//    {
//        cout << "======= 启动游戏 =======\n";
//        a.init();
//        a.setVolume(80);
//
//        b.init();
//        b.setResolution(1920, 1080);
//        b.loadShaders();
//
//        c.init();
//        c.connect("game-server.com");
//
//        d.init();
//        d.setGravity(9.8f);
//
//        a.playBGM();
//        cout << "======= 游戏启动完成 =======\n";
//    }
//
//    // 一键退出游戏
//    void exitGame()
//    {
//        cout << "======= 退出游戏 =======";
//        cout << "[网络] 断开连接\n";
//        cout << "[音频] 停止播放\n" ;
//        cout << "[图形] 释放资源\n";
//        cout << "======= 退出完成 =======" << endl;
//    }
//};
//// ========== 客户端 ==========
//int main()
//{
//    GameFacade& facade= GameFacade::getInstance();
//    facade.startGame();   // 一键启动
//    cout << endl;
//    facade.exitGame();    // 一键退出
//    std::cin.get();
//}
