void MainWindow::on_rotateButton_clicked()
{
    if(ui->label->pixmap())
    {
        QImage pixmap = ui->label->pixmap()->toImage();
        QMatrix rm;
        rm.rotate(90);
        pixmap = pixmap.transformed(rm);
        QPixmap pixmap2 = QPixmap::fromImage(pixmap);
        ui->label->setPixmap(pixmap2.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
    }
}

void MainWindow::on_pushButton_clicked()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Open file"), "E://", tr("JPG files(*.jpg);;JPEG files(*.jpeg)"
                                                                                      ";;BMP files(*.bmp);;PNG files(*.png)"));
    QPixmap pix (fileNames.at(0));
    ui->label_3->setPixmap(pix.scaled(ui->label_3->width(),ui->label_3->height(),Qt::KeepAspectRatio));
    QPixmap pix_2 (fileNames.at(1));
    ui->label_4->setPixmap(pix_2.scaled(ui->label_4->width(),ui->label_4->height(),Qt::KeepAspectRatio));
}
//comentariu
