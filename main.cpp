#include <QApplication>
#include <QPushButton>
#include <graphics.h>
#include "MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    auto main=new MainWindow();
    main->show();
    return QApplication::exec();
}
