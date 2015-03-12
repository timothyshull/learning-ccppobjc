#include <QApplication>
#include <QMainWindow>
#include "DesignerTest.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);
    QMainWindow *window = new QMainWindow;
    Ui_MainWindow w;

    w.setupUi(window);
    window->show();
    return app.exec();
}
