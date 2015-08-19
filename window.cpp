#include <QAxWidget>
#include "window.h"
#include "myopenglwidget.h"

Window::Window(QWidget *parent) : QMainWindow(parent)
{
    QTabWidget *tt=new QTabWidget;
    MyOpenGLWidget *openGL = new MyOpenGLWidget ();

    QAxWidget *native = new QAxWidget();
    native->setControl(QStringLiteral("{f587310d-5306-494d-87e2-88334b46e781}"));//暴风影音控件
    native->setAttribute(Qt::WA_NativeWindow);
    native->setAttribute(Qt::WA_DontCreateNativeAncestors);

    tt->addTab(native,"n");
    tt->addTab(openGL,"o");

    setCentralWidget(tt);
}

Window::~Window()
{

}

