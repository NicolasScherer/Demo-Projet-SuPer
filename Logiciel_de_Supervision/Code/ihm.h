#ifndef IHM_H
#define IHM_H

#include <QMainWindow>
#include <QtSql>
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QLabel>
#include <QToolTip>
#include <QTextCursor>
#include <QSound>

#include "dynamique.h"
#include "bdd.h"
#include "affichealarme.h"

////////////////////////////////
namespace Ui {
class Ihm;
}

class Ihm : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ihm( QWidget *parent = 0);
    ~Ihm();


private:
    Ui::Ihm *ui;

    //Ihm dynamique (initialisation + visualisation lecteur)
    void ajoutOnglet(int num_vue, QString legende, QString image);
    void ajoutLecteur(int numLecteur, int num_vue, int x, int y);
    void suppLecteur(int numLecteur, int num_vue);

    //Init nouveau badge
    void ajoutBadge(int numLecteur, int num_vue);

    /*---Config de Super---*/
    int tempoM; // ms tempo pour le timer mouvement
    int tempoR; // ms tempo pour le timer de rÃ©ception
    void setTempo(int, int);

    QList<T_ListeLabel *> listeLabel;

    int calculerMoyenne(T_ListeLabel *tll); //calculer moyenne sensibilité
    bool sensDePassage(T_ListeLabel *tll);  //sens de passage
    void calculerDroite(int sens, T_Point pointA, T_Point pointB, T_Point *pointF);    //calcul position exacte

    // la classe Dynamique (sauvegarde de l'affichage dynamique)
    Dynamique pDynamique;
    //pointeur sur la classe BDD
    Bdd *pBdd;

    T_ListeLabel *tll;  //pointeur sur structure

    //traitement de la trame
    bool traitementTrame(QString trame);

    //affichage Alarmes
    QTextCursor curseur; //Récupération du QTextCursor de la zone de texte
    int position; //Récupération de sa position

signals:
    void signalHommeEnDanger(QString &);    //alarme homme en danger
    void signalPerteReception(int numBadge, int numLecteur, T_ListeLabel *);    //perte de réception

public slots:
    //lié à la connexion/déconnexion des lecteurs
    void lecteurActif(int);
    void lecteurInactif(int);
    void lecteurInconnu(QString);

    //traitement de la trame
    void trameRecu(QString trame);

    //timer mouvement (homme en danger)
    void timerMouv();
    //timer réception (perte de badge)
    void timerRec();

private slots:
    //homme en danger (alarme)
    void hommeEnDanger(QString &);
    //perte de réception
    void perteReception(int, int, T_ListeLabel *);
    //nettoyer Alarme
    void clearAlarme();

    //partie tests démo
    //lecteurs
    void newLecteur();
    void delLecteur();
    void intrusLecteur();
    //badges
    void newBadge();
};

#endif // IHM_H

