/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_kuhinja;
    QGraphicsView *graphicsView_kuhinja;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_kuh_1;
    QLabel *label;
    QPushButton *pushButton_kuh_2;
    QWidget *page_kupatilo;
    QGraphicsView *graphicsView_kupatilo;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_kup_1;
    QLabel *label_2;
    QPushButton *pushButton_kup_2;
    QWidget *page_igraonica;
    QGraphicsView *graphicsView_igraonica;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_igraon_1;
    QLabel *label_3;
    QPushButton *pushButton_igraon_2;
    QWidget *page_spavaca;
    QGraphicsView *graphicsView_spavaca;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_spav_1;
    QLabel *label_4;
    QPushButton *pushButton_spav_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(672, 457);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 50, 671, 391));
        stackedWidget->setStyleSheet(QStringLiteral("background-color: rgb(191, 64, 64);"));
        page_kuhinja = new QWidget();
        page_kuhinja->setObjectName(QStringLiteral("page_kuhinja"));
        page_kuhinja->setStyleSheet(QStringLiteral(""));
        graphicsView_kuhinja = new QGraphicsView(page_kuhinja);
        graphicsView_kuhinja->setObjectName(QStringLiteral("graphicsView_kuhinja"));
        graphicsView_kuhinja->setGeometry(QRect(0, 0, 681, 391));
        layoutWidget = new QWidget(page_kuhinja);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 16, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_kuh_1 = new QPushButton(layoutWidget);
        pushButton_kuh_1->setObjectName(QStringLiteral("pushButton_kuh_1"));

        horizontalLayout->addWidget(pushButton_kuh_1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton_kuh_2 = new QPushButton(layoutWidget);
        pushButton_kuh_2->setObjectName(QStringLiteral("pushButton_kuh_2"));

        horizontalLayout->addWidget(pushButton_kuh_2);

        stackedWidget->addWidget(page_kuhinja);
        page_kupatilo = new QWidget();
        page_kupatilo->setObjectName(QStringLiteral("page_kupatilo"));
        graphicsView_kupatilo = new QGraphicsView(page_kupatilo);
        graphicsView_kupatilo->setObjectName(QStringLiteral("graphicsView_kupatilo"));
        graphicsView_kupatilo->setGeometry(QRect(0, 0, 671, 391));
        layoutWidget1 = new QWidget(page_kupatilo);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 20, 391, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_kup_1 = new QPushButton(layoutWidget1);
        pushButton_kup_1->setObjectName(QStringLiteral("pushButton_kup_1"));

        horizontalLayout_2->addWidget(pushButton_kup_1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButton_kup_2 = new QPushButton(layoutWidget1);
        pushButton_kup_2->setObjectName(QStringLiteral("pushButton_kup_2"));

        horizontalLayout_2->addWidget(pushButton_kup_2);

        label_2->raise();
        pushButton_kup_2->raise();
        pushButton_kup_1->raise();
        stackedWidget->addWidget(page_kupatilo);
        page_igraonica = new QWidget();
        page_igraonica->setObjectName(QStringLiteral("page_igraonica"));
        graphicsView_igraonica = new QGraphicsView(page_igraonica);
        graphicsView_igraonica->setObjectName(QStringLiteral("graphicsView_igraonica"));
        graphicsView_igraonica->setGeometry(QRect(0, 0, 671, 391));
        layoutWidget2 = new QWidget(page_igraonica);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(150, 20, 371, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_igraon_1 = new QPushButton(layoutWidget2);
        pushButton_igraon_1->setObjectName(QStringLiteral("pushButton_igraon_1"));

        horizontalLayout_3->addWidget(pushButton_igraon_1);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pushButton_igraon_2 = new QPushButton(layoutWidget2);
        pushButton_igraon_2->setObjectName(QStringLiteral("pushButton_igraon_2"));

        horizontalLayout_3->addWidget(pushButton_igraon_2);

        stackedWidget->addWidget(page_igraonica);
        page_spavaca = new QWidget();
        page_spavaca->setObjectName(QStringLiteral("page_spavaca"));
        graphicsView_spavaca = new QGraphicsView(page_spavaca);
        graphicsView_spavaca->setObjectName(QStringLiteral("graphicsView_spavaca"));
        graphicsView_spavaca->setGeometry(QRect(0, 0, 671, 391));
        layoutWidget3 = new QWidget(page_spavaca);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 20, 341, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_spav_1 = new QPushButton(layoutWidget3);
        pushButton_spav_1->setObjectName(QStringLiteral("pushButton_spav_1"));

        horizontalLayout_4->addWidget(pushButton_spav_1);

        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        pushButton_spav_2 = new QPushButton(layoutWidget3);
        pushButton_spav_2->setObjectName(QStringLiteral("pushButton_spav_2"));

        horizontalLayout_4->addWidget(pushButton_spav_2);

        stackedWidget->addWidget(page_spavaca);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_kuh_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "           Kuhinja", Q_NULLPTR));
        pushButton_kuh_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_kup_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "        Kupatilo", Q_NULLPTR));
        pushButton_kup_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_igraon_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "    Soba za igru", Q_NULLPTR));
        pushButton_igraon_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
        pushButton_spav_1->setText(QApplication::translate("MainWindow", "<", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "  Spavaca soba", Q_NULLPTR));
        pushButton_spav_2->setText(QApplication::translate("MainWindow", ">", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
