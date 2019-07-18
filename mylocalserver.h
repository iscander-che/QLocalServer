#ifndef MYLOCALSERVER_H
#define MYLOCALSERVER_H

#include <QWidget>
#include <QLocalServer>
#include <QLocalSocket>
#include <QTextEdit>

class MyLocalServer : public QWidget
{
    Q_OBJECT

public:
    MyLocalServer(QString serverName, QWidget* parent = 0);
    ~MyLocalServer();

private:
    // Указатель на QLocalServer
    QLocalServer* localServer;

    // Указатель на QTextEdit, в котором будет показываться поступающая
    // от клиента информация
    QTextEdit* textEdit;

    // Перменная для хранения размера следующего полученного от клиента блока
    quint16 nextBlockSize;

    // Метод для отправки клиенту подтверждения о приёме информации
    void sendToClient(QLocalSocket* localSocket, const QString& string);

public slots:
    // Слот обработки нового клиентского подключения
    virtual void slotNewConnection();

    // Слот чтения информации от клиента
    void slotReadClient();
};

#endif // MYLOCALSERVER_H
