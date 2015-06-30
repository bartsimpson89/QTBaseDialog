#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void show_widget(void);

private:
    void hide_widget(void);

private slots:
    void on_btn_return_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
