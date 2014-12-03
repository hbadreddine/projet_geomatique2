

#include <QtGui>
#include <QApplication>
#include <QMainWindow>
#include "mywindow.h"

int main(int argc, char** argv)
{
  QApplication application(argc,argv);

MyWindow *window = new MyWindow();


     window->setWindowTitle(QString::fromUtf8("MainWindow"));
     window->resize(450,300);
	 window->decorate(window);
     


	  
	



 
   
 
//viewer.show();

  return application.exec();
}
