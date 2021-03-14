#include "server.h"

Server::Server(int port)
{
    listen(QHostAddress::Any,port); // 监听端口号
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    // 当有一个新的连接建立起来的时候 就会执行这个函数
    socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket,SIGNAL(readyRead()),this,SLOT(receiveMessage()));

    emit giveMsg(socket->peerAddress().toString()+"上线了",2);
}

QTcpServer *Server::getSock()
{
    return this->socket;
}

void Server::receiveMessage()
{
    // 槽函数 接收信号
    QByteArray arr = socket->readAll();
    QString str = arr.data();

    emit giveMsg(str,1); // 触发信号
}
