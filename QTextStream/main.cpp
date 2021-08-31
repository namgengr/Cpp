#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include <QDir>

void write()
{
    QString path = QDir::currentPath();
    QFile file(path + "/test.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        // We're going to streaming text to the file
        QTextStream stream(&file);

        stream << "This is\n";
        stream << "a test";

        file.close();
        qDebug() << "Writing finished";
    }
}

void read()
{
    QString path = QDir::currentPath();
    QFile file(path + "/test.txt");
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        // We're going to streaming the file
        // to the QString
        QTextStream stream(&file);
        QString line;

        qDebug() << "Reading started...";

        do
        {
            line = stream.readLine();
            qDebug().noquote() << line;
        } while(!line.isNull());

        file.close();
        qDebug() << "Reading finished";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream stream(stdin);
    QString line;

    qDebug() << "writing to and reading from a file...\n";
    write();
    read();

    qDebug() << "Type something here...\n";

    do
    {
        // wait for user input here. Press <Enter> when finished
        line = stream.readLine();
        qDebug() << "\nWriting back...\n";
        qDebug() << line;           // write line to output w/quotes
        qDebug().noquote() << line; // write line to output w/o quotes
    } while (!line.isNull());



    return a.exec();
}


