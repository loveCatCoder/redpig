

#include <iostream>
#include <vector>
#include <chrono>

#include "base/ThreadPool.h"

#include "net/EventLoop.h"

using namespace muduo::net;
#include "stdio.h"

int TimerRunCount = 0;

void printOne()
{
    printf("Timer Run ：%d\r\n", ++TimerRunCount);
}
int main()
{
    muduo::ThreadPool pool(4);

    EventLoop loop;
    loop.runEvery(3, [&pool]()
                  { pool.enqueue(printOne); });
    loop.runEvery(2, [&pool]()
                  { pool.enqueue(printOne); });
    loop.loop(); // 执行EventLoop::loop()函数，这个函数在概述篇的EventLoop小节有提及

    
    return 0;
}