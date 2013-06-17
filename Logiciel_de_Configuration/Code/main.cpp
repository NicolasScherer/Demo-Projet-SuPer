#include <QApplication>
#include <QTextCodec>
#include "configurer.h"


int main(int argc, char *argv[])
{
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    QApplication a(argc, argv);
    Configurer w;
    w.show();
    
    return a.exec();
}
