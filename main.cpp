#include "imagemanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageManager w;
    w.show();
    
    return a.exec();
}
