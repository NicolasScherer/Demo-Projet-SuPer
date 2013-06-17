/********************************************************************************
** Form generated from reading UI file 'ihm.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IHM_H
#define UI_IHM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ihm
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QTextEdit *txtAlarme;
    QLabel *label2;
    QLabel *label2_2;
    QPushButton *btClear;
    QLabel *label;
    QLabel *lbActivite;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_8;
    QGroupBox *groupBox_2;
    QPushButton *btLectNew;
    QPushButton *btLectDel;
    QPushButton *btLectIntrus;
    QLineEdit *lEditLecteur;
    QGroupBox *groupBox_3;
    QLineEdit *lEditBadge;
    QPushButton *btBadgeNew;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Ihm)
    {
        if (Ihm->objectName().isEmpty())
            Ihm->setObjectName(QString::fromUtf8("Ihm"));
        Ihm->resize(850, 840);
        Ihm->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(Ihm);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(20, 60, 800, 610));
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 670, 801, 111));
        groupBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        txtAlarme = new QTextEdit(groupBox);
        txtAlarme->setObjectName(QString::fromUtf8("txtAlarme"));
        txtAlarme->setEnabled(true);
        txtAlarme->setGeometry(QRect(70, 20, 721, 91));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        txtAlarme->setFont(font);
        txtAlarme->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ForbiddenCursor)));
        txtAlarme->setMouseTracking(false);
        txtAlarme->setAcceptDrops(true);
        txtAlarme->setReadOnly(true);
        txtAlarme->setTextInteractionFlags(Qt::NoTextInteraction);
        label2 = new QLabel(groupBox);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(20, 20, 61, 16));
        label2_2 = new QLabel(groupBox);
        label2_2->setObjectName(QString::fromUtf8("label2_2"));
        label2_2->setGeometry(QRect(10, 90, 61, 20));
        btClear = new QPushButton(groupBox);
        btClear->setObjectName(QString::fromUtf8("btClear"));
        btClear->setEnabled(true);
        btClear->setGeometry(QRect(7, 45, 65, 35));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 191, 21));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        lbActivite = new QLabel(centralWidget);
        lbActivite->setObjectName(QString::fromUtf8("lbActivite"));
        lbActivite->setEnabled(true);
        lbActivite->setGeometry(QRect(40, 10, 31, 31));
        lbActivite->setPixmap(QPixmap(QString::fromUtf8("ressources/activite_vert.png")));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 160, 531, 16));
        label_7->setFont(font);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 210, 481, 21));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 300, 511, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(80, 190, 481, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 270, 571, 16));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 0, 211, 71));
        btLectNew = new QPushButton(groupBox_2);
        btLectNew->setObjectName(QString::fromUtf8("btLectNew"));
        btLectNew->setGeometry(QRect(10, 20, 51, 23));
        btLectNew->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 192, 0);"));
        btLectNew->setCheckable(false);
        btLectNew->setAutoDefault(false);
        btLectNew->setDefault(false);
        btLectNew->setFlat(false);
        btLectDel = new QPushButton(groupBox_2);
        btLectDel->setObjectName(QString::fromUtf8("btLectDel"));
        btLectDel->setGeometry(QRect(60, 20, 51, 23));
        btLectDel->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(255, 0, 0);"));
        btLectIntrus = new QPushButton(groupBox_2);
        btLectIntrus->setObjectName(QString::fromUtf8("btLectIntrus"));
        btLectIntrus->setGeometry(QRect(140, 20, 61, 23));
        btLectIntrus->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(255, 128, 0);"));
        lEditLecteur = new QLineEdit(groupBox_2);
        lEditLecteur->setObjectName(QString::fromUtf8("lEditLecteur"));
        lEditLecteur->setGeometry(QRect(40, 50, 111, 22));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(650, 0, 151, 81));
        lEditBadge = new QLineEdit(groupBox_3);
        lEditBadge->setObjectName(QString::fromUtf8("lEditBadge"));
        lEditBadge->setGeometry(QRect(20, 50, 101, 22));
        btBadgeNew = new QPushButton(groupBox_3);
        btBadgeNew->setObjectName(QString::fromUtf8("btBadgeNew"));
        btBadgeNew->setGeometry(QRect(40, 20, 81, 23));
        btBadgeNew->setStyleSheet(QString::fromUtf8("font: 9pt \"Sans Serif\";\n"
"background-color: rgb(0, 192, 0);"));
        Ihm->setCentralWidget(centralWidget);
        label_8->raise();
        label_9->raise();
        label_11->raise();
        label_7->raise();
        label_10->raise();
        groupBox->raise();
        label->raise();
        lbActivite->raise();
        tabWidget->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        menuBar = new QMenuBar(Ihm);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 20));
        Ihm->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Ihm);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Ihm->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Ihm);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Ihm->setStatusBar(statusBar);

        retranslateUi(Ihm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Ihm);
    } // setupUi

    void retranslateUi(QMainWindow *Ihm)
    {
        Ihm->setWindowTitle(QApplication::translate("Ihm", "Supervision", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Ihm", "Tab 1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Ihm", "Erreur", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Ihm", "Alarmes", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("Ihm", "r\303\251centes", 0, QApplication::UnicodeUTF8));
        label2_2->setText(QApplication::translate("Ihm", "anciennes", 0, QApplication::UnicodeUTF8));
        btClear->setText(QApplication::translate("Ihm", "Nettoyer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Ihm", "SuPer : Logiciel de Supervision", 0, QApplication::UnicodeUTF8));
        lbActivite->setText(QString());
        label_7->setText(QApplication::translate("Ihm", "Erreur : le logiciel n'a pu se mettre \303\240 jour en fonction de la Base de donn\303\251es.", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Ihm", "Erreur possible : La base de donn\303\251es est vide.", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Ihm", "Si le probl\303\250me persiste, contacter la section BTS IRIS qui a d\303\251velopp\303\251 SuPer.", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Ihm", "Erreur possible : La base de donn\303\251es est inaccessible.", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Ihm", "Il est vivement conseill\303\251 de regarder attentivement l'aide fournie avec le logiciel.", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Ihm", "Lecteurs", 0, QApplication::UnicodeUTF8));
        btLectNew->setText(QApplication::translate("Ihm", "New", 0, QApplication::UnicodeUTF8));
        btLectDel->setText(QApplication::translate("Ihm", "Del", 0, QApplication::UnicodeUTF8));
        btLectIntrus->setText(QApplication::translate("Ihm", "Intrus", 0, QApplication::UnicodeUTF8));
        lEditLecteur->setText(QApplication::translate("Ihm", "192.168.60.101", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Ihm", "Badges", 0, QApplication::UnicodeUTF8));
        lEditBadge->setText(QApplication::translate("Ihm", "[A10016A701]", 0, QApplication::UnicodeUTF8));
        btBadgeNew->setText(QApplication::translate("Ihm", "Envoyer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Ihm: public Ui_Ihm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IHM_H
