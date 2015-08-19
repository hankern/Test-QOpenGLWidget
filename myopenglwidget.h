#ifndef MYOPENGLWIDGET_H
#define MYOPENGLWIDGET_H
#include <QOpenGLWidget>

class MyOpenGLWidget : public QOpenGLWidget
{
public:
    MyOpenGLWidget();
    ~MyOpenGLWidget();

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *);
};

#endif // MYOPENGLWIDGET_H
