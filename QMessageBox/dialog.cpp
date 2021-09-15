#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>
#include <QDebug>

/*
 * Name: Tom Roberts
 * Subject: QMessageBox examples
 */

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_About_clicked()
{
    QMessageBox::about(this, "Title", "About MessageBox");
}

void Dialog::on_pushButton_AboutQt_clicked()
{
    QMessageBox::aboutQt(this, "Title");
}

void Dialog::on_pushButton_Information_clicked()
{
    QMessageBox::information(this, "Title", "Information MessageBox");
}

void Dialog::on_pushButton_Critical_clicked()
{
    QMessageBox::critical(this, "Title", "Critical MessageBox");
}

void Dialog::on_pushButton_Warning_clicked()
{
    // using three arguments
    //QMessageBox::warning(this, "Title", "Warning MessageBox");

    QMessageBox msgbox;
    msgbox.setText("Warning MessageBox");
    msgbox.setInformativeText("What do you want to do?");
    msgbox.setIcon(QMessageBox::Warning);
    msgbox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard
                              | QMessageBox::Cancel);
    msgbox.setDefaultButton(QMessageBox::Save);
    int reply = msgbox.exec();
    switch (reply) {
        case QMessageBox::Save:
            qDebug() << "user clicked Save";
            break;
        case QMessageBox::Discard:
            qDebug() << "user clicked Discard";
            break;
        case QMessageBox::Cancel:
            qDebug() << "user clicked Cancel";
            break;
        default:
            // should never be reached
            break;
    }

}

void Dialog::on_pushButton_Question_clicked()
{
    // using three arguments
    //QMessageBox::question(this, "Title", "Question MessageBox");

    // using four arguments
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                    "Title", "Question MessageBox",
                    QMessageBox::Yes | QMessageBox::No);
    switch (reply) {
        case QMessageBox::Yes:
            qDebug() << "user clicked Yes";
            break;
        case QMessageBox::No:
            qDebug() << "user clicked No";
            break;
        default:
            // should never be reached
            break;
    }
}

