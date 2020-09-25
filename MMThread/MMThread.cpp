#include "MMThread.h"
#include <thread>

int MMThread::start()
{
	std::thread t(&MMThread::run, this);
	t.detach();
	return 0;
}