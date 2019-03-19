#include <iostream>
#include <QApplication>

#include "DieGUI.h"

using namespace std;


int main(int argc, char* argv[]){

 QApplication app(argc, argv);

 DieGUI dlg;
 dlg.show();

 return app.exec();
}

