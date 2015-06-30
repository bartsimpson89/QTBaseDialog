#include "widget.h"
#include "global.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->btn_about->setText("");
    ui->btn_about->setStyleSheet(style_about);
    ui->btn_return->setText("");
    ui->btn_return->setStyleSheet(style_return);

    ui->label_about->setStyleSheet(style_label);
    ui->label_return->setStyleSheet(style_label);
    ui->label_bottom->setStyleSheet(style_bottom);
    ui->label_time->setStyleSheet(style_time);

    QRect rect;
    rect = ui->label_bottom->geometry();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::show_widget(void)
{
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowStaysOnTopHint);
    this->showFullScreen();

}
void Widget::hide_widget(void)
{
    this->hide();
}

void Widget::on_btn_return_clicked()
{
    this->hide_widget();
}
