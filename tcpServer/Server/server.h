#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QByteArray>

class Server : public QTcpServer
{
    Q_OBJECT // 信号和槽需要Q_OBJECT
public:
    Server(int port);
    void incomingConnection(qintptr socketDescriptor); // 虚函数重写
    QTcpServer* getSock();
private:
    QTcpSocket *socket;
private slots:
    void receiveMessage();
signals: // 自定义信号
    void giveMsg(QString,int);

};

#endif // SERVER_H
