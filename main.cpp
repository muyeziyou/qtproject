#include "QtWidgetsApplication1.h"
#include <QtWidgets/QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <Qt>
#include "main.h"
#include "lable.h"
using namespace std;

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    QtWidgetsApplication1 w;
    w.setGeometry(500, 100, 800, 600);
   // lableacon(&w);
   // w.show();
    return a.exec();
}
