

#include <QPushButton>
#include <QMessageBox>
#include <QMainWindow>
#include <QHBoxLayout>
#include "standardCamera.h"
#include "viewer.h"
#include "cameraViewer.h"

#include <QApplication>
#include <QGLViewer/manipulatedCameraFrame.h>

#include <iostream>
#include <unistd.h>




class MyWindow: public QMainWindow
{
  Q_OBJECT
  



  public:    
	MyWindow(){};
	~ MyWindow(){};
	
	
	
	 void decorate(MyWindow *window)
	{

	      QPushButton *button = new QPushButton();
	      QPushButton *button2 = new QPushButton();
	      
	      button->setText("Button1");
	      button2->setText("Button2");
	      
	   
	      
	      
	      QObject::connect(button, SIGNAL(clicked()),this, SLOT(clickedSlot()));
	      QObject::connect(button2, SIGNAL(clicked()),this, SLOT(clickedSlot()));
	      
	      button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
	      button2->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
		
	      QWidget* centralWidget = new QWidget(window);
	      centralWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
	      
	      QHBoxLayout* layout = new QHBoxLayout(centralWidget);

	      layout->addWidget(button);
	      layout->addWidget(button2);
	      
	      window->setCentralWidget(centralWidget);
	      window->setWindowTitle("Pushbutton Clicked Signal Test");
	      window->show();
	      
	};

 public slots:    
	void clickedSlot()
	{
	  
	 Viewer *vi = new Viewer;
	vi->show();

    
	     
	};
	
};
