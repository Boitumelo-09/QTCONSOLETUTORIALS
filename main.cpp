#include <QtCore/QCoreApplication>
#include <iostream>
#include <QTextStream>


static void print(std::string name) {
    std::cout << "Hello " << name << std::endl;
}
static void qtPrint(QString name) {
    QTextStream input(stdin);
    QTextStream output(stdout);
    output <<"Hello "<< name;
}
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    print("Boipelo");
    qtPrint("Boipelo Chaiman");
    return app.exec();
}
