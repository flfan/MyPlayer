// MMPlayer.cpp: 定义应用程序的入口点。
//

//#include "MMPlayer.h"
//
//using namespace std;
//#include <thread>
//#include <chrono>
//#include "MMThread/MMThread.h"
//
//void threadFunction(int i) {
//	printf("Thread Function: %d\n", i);
//}
//
//int main2()
//{
//	std::thread t(threadFunction,10);
//	t.join();
//	/*t.detach();
//	t.joinable();*/
//	return 0;
//}
//
//class MyMMThread : public MMThread
//{
//private:
//	int a;
//public:
//	MyMMThread(int _a)
//	{
//		a = _a;
//	}
//	virtual void run()
//	{
//		printf("MyMMThread %d\n", a);
//	}
//};
//
//int main_thread()
//{
//	MyMMThread t(10);
//	t.start();
//	int a = 20;
//	int b[] = { 1,2,3,4 };
//	
//	char cd = 'a';
//	int* pa = &a;
//	int(*c)[4] = &b;
//	char* pc = &cd;
//
//	std::this_thread::sleep_for(std::chrono::seconds(2));
//	printf("sleep out");
//	return 0;
//}





#include "MMAV/MMAV.h"
#include <stdio.h>

int main() {
	MMAVReader reader;

	// F://video/phone/VID20200711131303.mp4
	// c://DemoVideo/demo_video.mp4

	int ret = reader.Open("F://video/phone/VID20200711131303.mp4");
	if (ret) {
		printf("Open File Fail!!!\n");
		return -1;
	}

	while (1) {
		MMAVPacket pkt;
		ret = reader.Read(&pkt);
		if (ret) {
			break;
		}

		printf("Read Packet Success\n");
	}

	reader.Close();

	return 0;
}