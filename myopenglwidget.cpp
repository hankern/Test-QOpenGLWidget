#include "myopenglwidget.h"
#include <QPainter>
#include <QPaintEvent>
MyOpenGLWidget::MyOpenGLWidget()
{

}

MyOpenGLWidget::~MyOpenGLWidget()
{

}

void MyOpenGLWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(event->rect(), QColor(255,255,0));
    painter.end();
}
