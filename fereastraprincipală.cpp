#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lena.h"
#include <QString>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_browseButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open file"), "E://", tr("JPG files(*.jpg);;JPEG files(*.jpeg)"
                                                                                      ";;BMP files(*.bmp);;PNG files(*.png)"));
    //QMessageBox::information(this, tr("Path of selected file"), fileName);
    QPixmap pix (fileName);
    ui->label->setPixmap(pix.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
    ui->label_2->setText(fileName);
}

