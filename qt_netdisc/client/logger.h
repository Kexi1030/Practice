#ifndef LOGGER_H
#define LOGGER_H

/* 静态使用的类 程序运行之初对其进行初始化 会根据当前时间生成一个log文件
客户端其他部分所有部分调用log都会发送给此类，此类再分发给三部分——窗口的log显示 log文件以及qDebug的输出
考虑到多线程，写文件部分使用了互斥锁*/

class logger
{
public:
    logger();
};

#endif // LOGGER_H
