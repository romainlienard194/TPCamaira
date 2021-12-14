#include "TPCamera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TPCamera w;
    w.show();
    return a.exec();
}
