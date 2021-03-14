#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDebug>

class Server : public QTcpServer // 使其继承QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);

private:
    QTcpSocket *sock;

private slots: // 私有的槽
    void incomingConnection(qintptr socketDescriptor); // 对incomingConnection进行重写 这个虚函数是在接受到一个新的连接时运行的
    void receiveMessage(); // 接受消息的槽

};

#endif // SERVER_H
