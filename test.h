#ifndef TEST_H
#define TEST_H

#include <QMainWindow>
#include <QDebug>
#include <QWidget>
#include <QPushButton>
#include <QTableView>
#include <QSqlTableModel>
#include <QtSql/QSqlDatabase>
#include <QtDebug>
#include <QtSql/QSqlQuery>
#include <QSqlError>
#include <QApplication>
#include <QLocale>
#include <QTranslator>

QT_BEGIN_NAMESPACE
namespace Ui {
class test;
}
QT_END_NAMESPACE

class test : public QMainWindow
{
    Q_OBJECT

public slots:
    void BoutonAfficher1();
    //void BoutonNote2();

public:
    test(QWidget *parent = nullptr);
    ~test();


private:
    Ui::test *ui;
    QSqlTableModel *Afficher;
};
#endif // TEST_H
