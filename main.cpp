#include "gpa.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gpa w;
    w.show();



    return a.exec();
}
