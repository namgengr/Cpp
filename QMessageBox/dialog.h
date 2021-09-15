#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_pushButton_About_clicked();

    void on_pushButton_AboutQt_clicked();

    void on_pushButton_Information_clicked();

    void on_pushButton_Critical_clicked();

    void on_pushButton_Warning_clicked();

    void on_pushButton_Question_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
