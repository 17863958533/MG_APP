/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *textEdit_FilePath;
    QPushButton *pushButton_Select;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBox_TropDelay;
    QLabel *label_2;
    QComboBox *comboBox_Method;
    QLabel *label_3;
    QLabel *label_5;
    QCheckBox *checkBox_Kinematic;
    QLineEdit *lineEdit_Angle;
    QGroupBox *groupBox_6;
    QRadioButton *radioButton_igs;
    QRadioButton *radioButton_cnt;
    QComboBox *comboBox_PPPModel;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_GPS;
    QCheckBox *checkBox_BDS;
    QCheckBox *checkBox_GLONASS;
    QCheckBox *checkBox_GAlieo;
    QTextEdit *textEdit_Display;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_Run;
    QPushButton *pushButton_RunBatch;
    QCheckBox *checkBox_Back;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_SPP;
    QComboBox *comboBox_SPP_LC;
    QComboBox *comboBox_SPP_SMOOTH;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_Plot;
    QComboBox *comboBox_RunBatch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(791, 522);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit_FilePath = new QLineEdit(centralwidget);
        textEdit_FilePath->setObjectName(QString::fromUtf8("textEdit_FilePath"));
        textEdit_FilePath->setGeometry(QRect(10, 4, 531, 31));
        QFont font;
        font.setPointSize(10);
        textEdit_FilePath->setFont(font);
        pushButton_Select = new QPushButton(centralwidget);
        pushButton_Select->setObjectName(QString::fromUtf8("pushButton_Select"));
        pushButton_Select->setGeometry(QRect(559, 3, 130, 30));
        pushButton_Select->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 38, 611, 91));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 30, 75, 17));
        comboBox_TropDelay = new QComboBox(groupBox);
        comboBox_TropDelay->addItem(QString());
        comboBox_TropDelay->addItem(QString());
        comboBox_TropDelay->addItem(QString());
        comboBox_TropDelay->setObjectName(QString::fromUtf8("comboBox_TropDelay"));
        comboBox_TropDelay->setGeometry(QRect(10, 50, 100, 30));
        comboBox_TropDelay->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(137, 30, 61, 17));
        comboBox_Method = new QComboBox(groupBox);
        comboBox_Method->addItem(QString());
        comboBox_Method->addItem(QString());
        comboBox_Method->setObjectName(QString::fromUtf8("comboBox_Method"));
        comboBox_Method->setGeometry(QRect(124, 50, 86, 30));
        comboBox_Method->setFont(font);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(222, 26, 101, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(433, 32, 71, 17));
        checkBox_Kinematic = new QCheckBox(groupBox);
        checkBox_Kinematic->setObjectName(QString::fromUtf8("checkBox_Kinematic"));
        checkBox_Kinematic->setGeometry(QRect(433, 52, 71, 30));
        checkBox_Kinematic->setFont(font);
        checkBox_Kinematic->setChecked(false);
        lineEdit_Angle = new QLineEdit(groupBox);
        lineEdit_Angle->setObjectName(QString::fromUtf8("lineEdit_Angle"));
        lineEdit_Angle->setGeometry(QRect(225, 51, 81, 30));
        lineEdit_Angle->setFont(font);
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(510, 12, 91, 71));
        radioButton_igs = new QRadioButton(groupBox_6);
        radioButton_igs->setObjectName(QString::fromUtf8("radioButton_igs"));
        radioButton_igs->setGeometry(QRect(20, 25, 61, 26));
        radioButton_igs->setChecked(true);
        radioButton_cnt = new QRadioButton(groupBox_6);
        radioButton_cnt->setObjectName(QString::fromUtf8("radioButton_cnt"));
        radioButton_cnt->setGeometry(QRect(20, 46, 51, 26));
        comboBox_PPPModel = new QComboBox(groupBox);
        comboBox_PPPModel->addItem(QString());
        comboBox_PPPModel->addItem(QString());
        comboBox_PPPModel->setObjectName(QString::fromUtf8("comboBox_PPPModel"));
        comboBox_PPPModel->setGeometry(QRect(320, 50, 100, 30));
        comboBox_PPPModel->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(333, 30, 75, 17));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(626, 38, 151, 131));
        checkBox_GPS = new QCheckBox(groupBox_2);
        checkBox_GPS->setObjectName(QString::fromUtf8("checkBox_GPS"));
        checkBox_GPS->setEnabled(true);
        checkBox_GPS->setGeometry(QRect(10, 22, 92, 23));
        checkBox_GPS->setFont(font);
        checkBox_GPS->setChecked(true);
        checkBox_BDS = new QCheckBox(groupBox_2);
        checkBox_BDS->setObjectName(QString::fromUtf8("checkBox_BDS"));
        checkBox_BDS->setGeometry(QRect(10, 49, 92, 23));
        checkBox_BDS->setFont(font);
        checkBox_GLONASS = new QCheckBox(groupBox_2);
        checkBox_GLONASS->setObjectName(QString::fromUtf8("checkBox_GLONASS"));
        checkBox_GLONASS->setGeometry(QRect(10, 76, 92, 23));
        checkBox_GLONASS->setFont(font);
        checkBox_GAlieo = new QCheckBox(groupBox_2);
        checkBox_GAlieo->setObjectName(QString::fromUtf8("checkBox_GAlieo"));
        checkBox_GAlieo->setGeometry(QRect(10, 105, 92, 23));
        checkBox_GAlieo->setFont(font);
        textEdit_Display = new QTextEdit(centralwidget);
        textEdit_Display->setObjectName(QString::fromUtf8("textEdit_Display"));
        textEdit_Display->setGeometry(QRect(10, 280, 771, 191));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 136, 411, 71));
        pushButton_Run = new QPushButton(groupBox_3);
        pushButton_Run->setObjectName(QString::fromUtf8("pushButton_Run"));
        pushButton_Run->setGeometry(QRect(290, 20, 89, 30));
        pushButton_Run->setFont(font);
        pushButton_RunBatch = new QPushButton(groupBox_3);
        pushButton_RunBatch->setObjectName(QString::fromUtf8("pushButton_RunBatch"));
        pushButton_RunBatch->setGeometry(QRect(100, 20, 141, 30));
        pushButton_RunBatch->setFont(font);
        checkBox_Back = new QCheckBox(groupBox_3);
        checkBox_Back->setObjectName(QString::fromUtf8("checkBox_Back"));
        checkBox_Back->setGeometry(QRect(20, 20, 61, 30));
        checkBox_Back->setFont(font);
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 210, 521, 61));
        pushButton_SPP = new QPushButton(groupBox_4);
        pushButton_SPP->setObjectName(QString::fromUtf8("pushButton_SPP"));
        pushButton_SPP->setGeometry(QRect(258, 25, 89, 30));
        pushButton_SPP->setFont(font);
        comboBox_SPP_LC = new QComboBox(groupBox_4);
        comboBox_SPP_LC->addItem(QString());
        comboBox_SPP_LC->addItem(QString());
        comboBox_SPP_LC->setObjectName(QString::fromUtf8("comboBox_SPP_LC"));
        comboBox_SPP_LC->setGeometry(QRect(15, 25, 86, 30));
        comboBox_SPP_LC->setFont(font);
        comboBox_SPP_SMOOTH = new QComboBox(groupBox_4);
        comboBox_SPP_SMOOTH->addItem(QString());
        comboBox_SPP_SMOOTH->addItem(QString());
        comboBox_SPP_SMOOTH->setObjectName(QString::fromUtf8("comboBox_SPP_SMOOTH"));
        comboBox_SPP_SMOOTH->setGeometry(QRect(126, 25, 116, 30));
        comboBox_SPP_SMOOTH->setFont(font);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(540, 177, 191, 101));
        pushButton_Plot = new QPushButton(groupBox_5);
        pushButton_Plot->setObjectName(QString::fromUtf8("pushButton_Plot"));
        pushButton_Plot->setGeometry(QRect(10, 63, 126, 31));
        pushButton_Plot->setFont(font);
        comboBox_RunBatch = new QComboBox(groupBox_5);
        comboBox_RunBatch->setObjectName(QString::fromUtf8("comboBox_RunBatch"));
        comboBox_RunBatch->setGeometry(QRect(11, 26, 126, 31));
        comboBox_RunBatch->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 791, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MG-APPS", nullptr));
        pushButton_Select->setText(QApplication::translate("MainWindow", "SelectFloder", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Configure", nullptr));
        label->setText(QApplication::translate("MainWindow", "TropDelay", nullptr));
        comboBox_TropDelay->setItemText(0, QApplication::translate("MainWindow", "UNB3m", nullptr));
        comboBox_TropDelay->setItemText(1, QApplication::translate("MainWindow", "Sasstam(GPT2)", nullptr));
        comboBox_TropDelay->setItemText(2, QApplication::translate("MainWindow", "Hopfield(GPT2)", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "Method", nullptr));
        comboBox_Method->setItemText(0, QApplication::translate("MainWindow", "Kalman", nullptr));
        comboBox_Method->setItemText(1, QApplication::translate("MainWindow", "SRIF", nullptr));

        label_3->setText(QApplication::translate("MainWindow", "Cut-off Angle", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Kinematic", nullptr));
        checkBox_Kinematic->setText(QApplication::translate("MainWindow", "Kin", nullptr));
        lineEdit_Angle->setText(QApplication::translate("MainWindow", "10", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Products", nullptr));
        radioButton_igs->setText(QApplication::translate("MainWindow", "final", nullptr));
        radioButton_cnt->setText(QApplication::translate("MainWindow", "cnt", nullptr));
        comboBox_PPPModel->setItemText(0, QApplication::translate("MainWindow", "Ion_free", nullptr));
        comboBox_PPPModel->setItemText(1, QApplication::translate("MainWindow", "Uncombined", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "PPPModel", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Satellite system", nullptr));
        checkBox_GPS->setText(QApplication::translate("MainWindow", "GPS", nullptr));
        checkBox_BDS->setText(QApplication::translate("MainWindow", "BDS", nullptr));
        checkBox_GLONASS->setText(QApplication::translate("MainWindow", "GLONASS", nullptr));
        checkBox_GAlieo->setText(QApplication::translate("MainWindow", "Galileo", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "PPP", nullptr));
        pushButton_Run->setText(QApplication::translate("MainWindow", "Run", nullptr));
        pushButton_RunBatch->setText(QApplication::translate("MainWindow", "Run(Batch)", nullptr));
        checkBox_Back->setText(QApplication::translate("MainWindow", "Back", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "SPP", nullptr));
        pushButton_SPP->setText(QApplication::translate("MainWindow", "Run", nullptr));
        comboBox_SPP_LC->setItemText(0, QApplication::translate("MainWindow", "P_IF", nullptr));
        comboBox_SPP_LC->setItemText(1, QApplication::translate("MainWindow", "PL_IF", nullptr));

        comboBox_SPP_SMOOTH->setItemText(0, QApplication::translate("MainWindow", "NoSmooth", nullptr));
        comboBox_SPP_SMOOTH->setItemText(1, QApplication::translate("MainWindow", "Smooth", nullptr));

        groupBox_5->setTitle(QApplication::translate("MainWindow", "Plot Stations:", nullptr));
        pushButton_Plot->setText(QApplication::translate("MainWindow", "Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
