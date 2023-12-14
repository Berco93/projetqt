#include "test.h" //inclu le fichier test

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    test w;
   /* QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");//
    db.setDatabaseName("nouvelle bdd");
    db.setHostName("localhost");
    db.setUserName("berco");
    db.setPassword("Crif2024sn!");
    if(db.open())
    {
        qDebug() << "Vous etes mtn connecter a " << db.hostName();

        QSqlQuery query;

        query.exec("SELECT * FROM `jeu` ");
        while ( query.next()) {
            QString id = query.value(0).toString();
            QString nom = query.value(1).toString();
            QString Club = query.value(2).toString();

            qDebug() <<"\t|------------------------------------------";
            qDebug() << "id ="<< id <<"\t|"<<nom<<"\t|"<<Club<<"\t|";
        }
        qDebug() <<"\t|------------------------------------------";

        qDebug() << "Requete OK!";
        db.close();

    }
    else
    {
        qDebug() <<"La connexion a echouée, désolé" << db.lastError().text();
    }
*/
    w.show();
    return a.exec();
}
