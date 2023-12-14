#include "test.h" //inclu le fichier test.h
#include "ui_test.h"   //inclu l'interface graphique

test::test(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::test)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); //
    db.setDatabaseName("nouvelle bdd");
    db.setHostName("localhost");
    db.setUserName("berco");
    db.setPassword("Crif2024sn!");
    if(db.open())
    {
        qDebug() << "Vous etes mtn connecter a " << db.hostName();

    }
    else
    {
        qDebug() <<"La connexion a echouée, désolé" << db.lastError().text();
    }
    connect(ui->Boutonafficher, &QPushButton::clicked, this, &test::BoutonAfficher1);
    //ça permet de connecter le signal (clicked) au BoutonAfficher
}

test::~test()
{
    delete ui;
}
void test::BoutonAfficher1()
{
    QSqlQueryModel *Afficher = new QSqlQueryModel();//
    Afficher->setQuery("SELECT * FROM jeu");

    ui->ListeJoueurs->setModel(Afficher);

}
