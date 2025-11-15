#include <QtCore/QCoreApplication>
#include <iostream>
#include <QTextStream>


static void print(std::string name) {
    std::cout << "Hello " << name << std::endl;
}
static void qtPrint(QString name) {
    QTextStream input(stdin);
    QTextStream output(stdout);

    
    output <<"Enter Something : ";
    output.flush();
    QString something = input.readLine();
    
    
    output << "Hello " << name << ". You have entered : " << something;
}
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
   
    qtPrint("Boipelo Chaiman");
    return app.exec();
}
