#include "server.h"

Server::Server(QObject *parent) : QTcpServer(parent)
{
    listen(QHostAddress::Any,8888); // 类初始化开始监听
}

// 只要有新的连接接入 就会运行这个方法
void Server::incomingConnection(qintptr socketDescriptor)
{
    // qDebug()<<"有一个新的连接";
    sock = new QTcpSocket(this); // 新建一个套接字使新的连接存储到该套接字
    sock->setSocketDescriptor(socketDescriptor); //进行连接
    //将信号关联 一旦接受到readyRead的信号就执行receiveMessage槽
    connect(sock,SIGNAL(readyRead()),this,SLOT(receiveMessage()));
}

void Server::receiveMessage()
{
    if(sock->bytesAvailable() > 0)
    {
        char buffer[1024];
        sock->read(buffer,sock->bytesAvailable()); // 每次读1M有效信息到buffer
        qDebug()<<buffer;
    }
}


