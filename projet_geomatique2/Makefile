#############################################################################
# Makefile for building: viewer
# Generated by qmake (2.01a) (Qt 4.8.6) on: mer. d�c. 3 11:34:59 2014
# Project:  viewer.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile viewer.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_XML_LIB -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtXml -I/usr/include/qt4 -I/home/inf0phile/Téléchargements/libQGLViewer-2.3.17 -I-L/usr/lib/ -I/usr/local/include/opencv2 -I/usr/X11R6/include -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/X11R6/lib64 -L/usr/lib/x86_64-linux-gnu -L/home/inf0phile/Téléchargements/libQGLViewer-2.3.17/QGLViewer -lQGLViewer -lGLU -L/usr/local/lib -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_ml -lopencv_video -lopencv_features2d -lopencv_calib3d -lopencv_objdetect -lopencv_contrib -lopencv_legacy -lopencv_flann -lGL -lQtXml -lQtOpenGL -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = afficheortho.cpp \
		vegetation.cpp \
		percepunit.cpp \
		standardCamera.cpp \
		cameraViewer.cpp \
		viewer.cpp \
		bati.cpp \
		initgl.cpp \
		traitementimage.cpp \
		main.cpp moc_mywindow.cpp \
		moc_viewer.cpp
OBJECTS       = afficheortho.o \
		vegetation.o \
		percepunit.o \
		standardCamera.o \
		cameraViewer.o \
		viewer.o \
		bati.o \
		initgl.o \
		traitementimage.o \
		main.o \
		moc_mywindow.o \
		moc_viewer.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		viewer.pro
QMAKE_TARGET  = viewer
DESTDIR       = 
TARGET        = viewer

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: viewer.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtXml.prl \
		/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile viewer.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtXml.prl:
/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile viewer.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/viewer1.0.0 || $(MKDIR) .tmp/viewer1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/viewer1.0.0/ && $(COPY_FILE) --parents mywindow.h afficheortho.h vegetation.h percepunit.h standardCamera.h cameraViewer.h viewer.h bati.h initgl.h traitementimage.h .tmp/viewer1.0.0/ && $(COPY_FILE) --parents afficheortho.cpp vegetation.cpp percepunit.cpp standardCamera.cpp cameraViewer.cpp viewer.cpp bati.cpp initgl.cpp traitementimage.cpp main.cpp .tmp/viewer1.0.0/ && (cd `dirname .tmp/viewer1.0.0` && $(TAR) viewer1.0.0.tar viewer1.0.0 && $(COMPRESS) viewer1.0.0.tar) && $(MOVE) `dirname .tmp/viewer1.0.0`/viewer1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/viewer1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mywindow.cpp moc_viewer.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mywindow.cpp moc_viewer.cpp
moc_mywindow.cpp: standardCamera.h \
		viewer.h \
		cameraViewer.h \
		mywindow.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) mywindow.h -o moc_mywindow.cpp

moc_viewer.cpp: viewer.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) viewer.h -o moc_viewer.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

afficheortho.o: afficheortho.cpp afficheortho.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o afficheortho.o afficheortho.cpp

vegetation.o: vegetation.cpp vegetation.h \
		bati.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o vegetation.o vegetation.cpp

percepunit.o: percepunit.cpp percepunit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o percepunit.o percepunit.cpp

standardCamera.o: standardCamera.cpp standardCamera.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o standardCamera.o standardCamera.cpp

cameraViewer.o: cameraViewer.cpp cameraViewer.h \
		bati.h \
		initgl.h \
		traitementimage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cameraViewer.o cameraViewer.cpp

viewer.o: viewer.cpp viewer.h \
		bati.h \
		initgl.h \
		traitementimage.h \
		standardCamera.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o viewer.o viewer.cpp

bati.o: bati.cpp bati.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bati.o bati.cpp

initgl.o: initgl.cpp initgl.h \
		traitementimage.h \
		bati.h \
		afficheortho.h \
		vegetation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o initgl.o initgl.cpp

traitementimage.o: traitementimage.cpp traitementimage.h \
		percepunit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o traitementimage.o traitementimage.cpp

main.o: main.cpp mywindow.h \
		standardCamera.h \
		viewer.h \
		cameraViewer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

moc_mywindow.o: moc_mywindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mywindow.o moc_mywindow.cpp

moc_viewer.o: moc_viewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_viewer.o moc_viewer.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

