#include "net/EventLoop.h"

using namespace muduo::net;

int main()
{
    EventLoop loop;
    loop.loop(); // 执行EventLoop::loop()函数，这个函数在概述篇的EventLoop小节有提及
    return 0;
}