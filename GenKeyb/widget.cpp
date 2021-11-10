#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

char clicked=' ';

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , genKeyb(new GenKeybLogic(this))

{
    ui->setupUi(this);

    connect(ui->Button7,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->ButtonX,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->Button0,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->Button3,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->Button2,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->Button6,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->Button9,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->UpArrow,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->LeftArrow,SIGNAL(clicked()),this, SLOT(onBtnClicked()));
    connect(ui->RightArrow,SIGNAL(clicked()),this, SLOT(onBtnClicked()));

    connect(genKeyb, SIGNAL(dispChanged(QString)),this,SLOT(onDispChanged(QString)));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::onBtnClicked()
{
    QPushButton *butt=(QPushButton *)sender();
    QString buttval=butt->text();
    genKeyb->doCommand(buttval);
}

void Widget::onDispChanged(QString Text)
{
    ui->Display->setText(Text);
}
