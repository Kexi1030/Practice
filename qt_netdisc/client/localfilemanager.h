#ifndef LOCALFILEMANAGER_H
#define LOCALFILEMANAGER_H
#include<QObject>

namespace client {
class LocalFileWriter: public QObject
{
    Q_OBJECT
public:
    LocalFileWriter(QString syncPath_);
    void setFile(const FilePath, const int);
    client::PullReq generatePullReqEntry();
    void writePush(PushReqEntry &pushReq);
    bool finished;
signals:
    void sendDownMsg(QString, float);

private:
    int fulllen;
    QFile file;
    FilePath filePath;
    QString path, metaPath;
    QString syncPath;
    Chunks chunks;
    int chunksWriteCnt;
    QString METATAIL = ".tmydownload";
    void updateChunks();
};
}


#endif // LOCALFILEMANAGER_H
