#include "net/EventLoop.h"

using namespace muduo::net;
#include "stdio.h"

void printOne()
{
    printf("one\r\n");
}
int main()
{
    EventLoop loop;

    loop.runEvery(3,printOne);
    loop.loop(); // 执行EventLoop::loop()函数，这个函数在概述篇的EventLoop小节有提及
    return 0;
}