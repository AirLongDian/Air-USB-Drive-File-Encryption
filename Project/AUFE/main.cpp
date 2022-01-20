#include "AUFE.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AUFE w;
    w.show();
    return a.exec();
}
