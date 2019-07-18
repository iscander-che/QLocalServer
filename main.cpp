#include "mylocalserver.h"
#include <QApplication>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // Создаём и показываем объект класса MyLocalServer, определённого далее,
    // для запуска сервера с именем "MyLocalServer"
    MyLocalServer server("MyLocalServer");
    server.show();

    return app.exec();
}
