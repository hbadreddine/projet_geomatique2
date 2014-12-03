

#include <QApplication>
#include <QGLViewer/manipulatedCameraFrame.h>




#include <QtGui>
#include <QApplication>




MainWindow::MainWindow()
 {
     QWidget *widget = new QWidget;
     setCentralWidget(widget);






 
  
 QPushButton *bouton = new QPushButton("test");
    //bouton->show();
 connect(bouton, SIGNAL(released()), this, SLOT(newfile()));










     QWidget *topFiller = new QWidget;
     topFiller->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

 #ifdef Q_OS_SYMBIAN
     infoLabel = new QLabel();
 #else
     infoLabel = new QLabel();
 #endif
     infoLabel->setFrameStyle(QFrame::StyledPanel | QFrame::Sunken);
     infoLabel->setAlignment(Qt::AlignCenter);

     QWidget *bottomFiller = new QWidget;
     bottomFiller->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

     QVBoxLayout *layout = new QVBoxLayout;
     layout->setMargin(5);
     layout->addWidget(topFiller);
     layout->addWidget(bouton);
     layout->addWidget(infoLabel);
     layout->addWidget(bottomFiller);
     widget->setLayout(layout);

     createActions();
     createMenus();

 #ifndef Q_OS_SYMBIAN
     QString message = tr("A context menu is available by right-clicking");
     statusBar()->showMessage(message);
 #endif

     setWindowTitle(tr("Menus"));
     setMinimumSize(160, 160);
     resize(480, 320);
 }
