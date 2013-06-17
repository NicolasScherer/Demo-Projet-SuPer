#include <QApplication>
#include <QLabel>
#include <QTextCodec>
#include <QDebug>
#include "ihm.h"

int main(int argc, char *argv[])
{
    qDebug();

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));

    QApplication a(argc, argv);
    Ihm w;
    w.show();
    return a.exec();
}

