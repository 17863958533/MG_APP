/********************************************************************************
** Form generated from reading UI file 'ConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWIDGET_H
#define UI_CONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWidget
{
public:
    QGroupBox *groupBox_del;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit_delSats;
    QLabel *examp_del;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QGroupBox *groupBox_Obs;
    QLabel *gps_label;
    QPlainTextEdit *GPS_L1;
    QPlainTextEdit *GPS_L2;
    QPlainTextEdit *GLO_L1;
    QPlainTextEdit *GLO_L2;
    QLabel *glo_label;
    QPlainTextEdit *BDS_L2;
    QPlainTextEdit *BDS_L1;
    QLabel *bds_label;
    QPlainTextEdit *GAL_L2;
    QPlainTextEdit *GAL_L1;
    QLabel *gal_label;
    QLabel *examp_obs;
    QGroupBox *groupBox_del_2;
    QPlainTextEdit *Qw_pos;
    QLabel *Qw_label;
    QPlainTextEdit *Qw_zwd;
    QLabel *Pk_label;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPlainTextEdit *Qw_clk;
    QLabel *label_4;
    QPlainTextEdit *Qw_amb;
    QLabel *label_5;
    QPlainTextEdit *Qw_ion;
    QPlainTextEdit *Pk_amb;
    QPlainTextEdit *Pk_pos;
    QPlainTextEdit *Pk_ion;
    QPlainTextEdit *Pk_clk;
    QPlainTextEdit *Pk_zwd;
    QLabel *label_6;
    QPlainTextEdit *L_precision;
    QPlainTextEdit *P_precision;

    void setupUi(QWidget *ConfigWidget)
    {
        if (ConfigWidget->objectName().isEmpty())
            ConfigWidget->setObjectName(QString::fromUtf8("ConfigWidget"));
        ConfigWidget->resize(734, 385);
        groupBox_del = new QGroupBox(ConfigWidget);
        groupBox_del->setObjectName(QString::fromUtf8("groupBox_del"));
        groupBox_del->setGeometry(QRect(10, 10, 721, 71));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox_del->setFont(font);
        gridLayout = new QGridLayout(groupBox_del);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit_delSats = new QPlainTextEdit(groupBox_del);
        plainTextEdit_delSats->setObjectName(QString::fromUtf8("plainTextEdit_delSats"));
        plainTextEdit_delSats->setEnabled(true);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        plainTextEdit_delSats->setFont(font1);

        gridLayout->addWidget(plainTextEdit_delSats, 0, 0, 1, 1);

        examp_del = new QLabel(groupBox_del);
        examp_del->setObjectName(QString::fromUtf8("examp_del"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        examp_del->setFont(font2);

        gridLayout->addWidget(examp_del, 0, 1, 1, 1);

        pushButton_ok = new QPushButton(ConfigWidget);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(500, 350, 93, 28));
        pushButton_cancel = new QPushButton(ConfigWidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(600, 350, 93, 28));
        groupBox_Obs = new QGroupBox(ConfigWidget);
        groupBox_Obs->setObjectName(QString::fromUtf8("groupBox_Obs"));
        groupBox_Obs->setGeometry(QRect(10, 90, 721, 91));
        groupBox_Obs->setFont(font);
        gps_label = new QLabel(groupBox_Obs);
        gps_label->setObjectName(QString::fromUtf8("gps_label"));
        gps_label->setGeometry(QRect(8, 29, 41, 16));
        GPS_L1 = new QPlainTextEdit(groupBox_Obs);
        GPS_L1->setObjectName(QString::fromUtf8("GPS_L1"));
        GPS_L1->setGeometry(QRect(51, 24, 51, 30));
        GPS_L1->setFont(font2);
        GPS_L2 = new QPlainTextEdit(groupBox_Obs);
        GPS_L2->setObjectName(QString::fromUtf8("GPS_L2"));
        GPS_L2->setGeometry(QRect(110, 24, 51, 30));
        GPS_L2->setFont(font2);
        GLO_L1 = new QPlainTextEdit(groupBox_Obs);
        GLO_L1->setObjectName(QString::fromUtf8("GLO_L1"));
        GLO_L1->setGeometry(QRect(251, 24, 51, 30));
        GLO_L1->setFont(font2);
        GLO_L2 = new QPlainTextEdit(groupBox_Obs);
        GLO_L2->setObjectName(QString::fromUtf8("GLO_L2"));
        GLO_L2->setGeometry(QRect(310, 24, 51, 30));
        GLO_L2->setFont(font2);
        glo_label = new QLabel(groupBox_Obs);
        glo_label->setObjectName(QString::fromUtf8("glo_label"));
        glo_label->setGeometry(QRect(168, 27, 91, 20));
        BDS_L2 = new QPlainTextEdit(groupBox_Obs);
        BDS_L2->setObjectName(QString::fromUtf8("BDS_L2"));
        BDS_L2->setGeometry(QRect(470, 23, 51, 30));
        BDS_L2->setFont(font2);
        BDS_L1 = new QPlainTextEdit(groupBox_Obs);
        BDS_L1->setObjectName(QString::fromUtf8("BDS_L1"));
        BDS_L1->setGeometry(QRect(411, 23, 51, 30));
        BDS_L1->setFont(font2);
        bds_label = new QLabel(groupBox_Obs);
        bds_label->setObjectName(QString::fromUtf8("bds_label"));
        bds_label->setGeometry(QRect(368, 26, 41, 20));
        GAL_L2 = new QPlainTextEdit(groupBox_Obs);
        GAL_L2->setObjectName(QString::fromUtf8("GAL_L2"));
        GAL_L2->setGeometry(QRect(669, 22, 51, 30));
        GAL_L2->setFont(font2);
        GAL_L1 = new QPlainTextEdit(groupBox_Obs);
        GAL_L1->setObjectName(QString::fromUtf8("GAL_L1"));
        GAL_L1->setGeometry(QRect(610, 22, 51, 30));
        GAL_L1->setFont(font2);
        gal_label = new QLabel(groupBox_Obs);
        gal_label->setObjectName(QString::fromUtf8("gal_label"));
        gal_label->setGeometry(QRect(527, 25, 81, 20));
        examp_obs = new QLabel(groupBox_Obs);
        examp_obs->setObjectName(QString::fromUtf8("examp_obs"));
        examp_obs->setGeometry(QRect(520, 55, 201, 31));
        examp_obs->setFont(font1);
        groupBox_del_2 = new QGroupBox(ConfigWidget);
        groupBox_del_2->setObjectName(QString::fromUtf8("groupBox_del_2"));
        groupBox_del_2->setGeometry(QRect(10, 190, 721, 161));
        groupBox_del_2->setFont(font);
        Qw_pos = new QPlainTextEdit(groupBox_del_2);
        Qw_pos->setObjectName(QString::fromUtf8("Qw_pos"));
        Qw_pos->setGeometry(QRect(255, 40, 85, 31));
        Qw_pos->setFont(font2);
        Qw_label = new QLabel(groupBox_del_2);
        Qw_label->setObjectName(QString::fromUtf8("Qw_label"));
        Qw_label->setGeometry(QRect(50, 45, 201, 16));
        Qw_zwd = new QPlainTextEdit(groupBox_del_2);
        Qw_zwd->setObjectName(QString::fromUtf8("Qw_zwd"));
        Qw_zwd->setGeometry(QRect(352, 40, 85, 30));
        Qw_zwd->setFont(font2);
        Pk_label = new QLabel(groupBox_del_2);
        Pk_label->setObjectName(QString::fromUtf8("Pk_label"));
        Pk_label->setGeometry(QRect(10, 85, 251, 16));
        label = new QLabel(groupBox_del_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(252, 14, 91, 20));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        label_2 = new QLabel(groupBox_del_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(377, 14, 31, 16));
        label_2->setFont(font3);
        label_3 = new QLabel(groupBox_del_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 14, 31, 16));
        label_3->setFont(font3);
        Qw_clk = new QPlainTextEdit(groupBox_del_2);
        Qw_clk->setObjectName(QString::fromUtf8("Qw_clk"));
        Qw_clk->setGeometry(QRect(445, 40, 85, 30));
        Qw_clk->setFont(font2);
        label_4 = new QLabel(groupBox_del_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(568, 14, 31, 16));
        label_4->setFont(font3);
        Qw_amb = new QPlainTextEdit(groupBox_del_2);
        Qw_amb->setObjectName(QString::fromUtf8("Qw_amb"));
        Qw_amb->setGeometry(QRect(539, 40, 85, 30));
        Qw_amb->setFont(font2);
        label_5 = new QLabel(groupBox_del_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(658, 14, 31, 16));
        label_5->setFont(font3);
        Qw_ion = new QPlainTextEdit(groupBox_del_2);
        Qw_ion->setObjectName(QString::fromUtf8("Qw_ion"));
        Qw_ion->setGeometry(QRect(632, 40, 85, 30));
        Qw_ion->setFont(font2);
        Pk_amb = new QPlainTextEdit(groupBox_del_2);
        Pk_amb->setObjectName(QString::fromUtf8("Pk_amb"));
        Pk_amb->setGeometry(QRect(539, 80, 85, 30));
        Pk_amb->setFont(font2);
        Pk_pos = new QPlainTextEdit(groupBox_del_2);
        Pk_pos->setObjectName(QString::fromUtf8("Pk_pos"));
        Pk_pos->setGeometry(QRect(255, 80, 85, 31));
        Pk_pos->setFont(font2);
        Pk_ion = new QPlainTextEdit(groupBox_del_2);
        Pk_ion->setObjectName(QString::fromUtf8("Pk_ion"));
        Pk_ion->setGeometry(QRect(632, 80, 85, 30));
        Pk_ion->setFont(font2);
        Pk_clk = new QPlainTextEdit(groupBox_del_2);
        Pk_clk->setObjectName(QString::fromUtf8("Pk_clk"));
        Pk_clk->setGeometry(QRect(445, 80, 85, 30));
        Pk_clk->setFont(font2);
        Pk_zwd = new QPlainTextEdit(groupBox_del_2);
        Pk_zwd->setObjectName(QString::fromUtf8("Pk_zwd"));
        Pk_zwd->setGeometry(QRect(352, 80, 85, 30));
        Pk_zwd->setFont(font2);
        label_6 = new QLabel(groupBox_del_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 123, 341, 21));
        L_precision = new QPlainTextEdit(groupBox_del_2);
        L_precision->setObjectName(QString::fromUtf8("L_precision"));
        L_precision->setGeometry(QRect(362, 120, 85, 31));
        L_precision->setFont(font2);
        P_precision = new QPlainTextEdit(groupBox_del_2);
        P_precision->setObjectName(QString::fromUtf8("P_precision"));
        P_precision->setGeometry(QRect(460, 120, 85, 31));
        P_precision->setFont(font2);

        retranslateUi(ConfigWidget);

        QMetaObject::connectSlotsByName(ConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigWidget)
    {
        ConfigWidget->setWindowTitle(QApplication::translate("ConfigWidget", "ConfigWidget", nullptr));
        groupBox_del->setTitle(QApplication::translate("ConfigWidget", "Delete satellites", nullptr));
        plainTextEdit_delSats->setPlainText(QString());
        examp_del->setText(QApplication::translate("ConfigWidget", " Example: G01;C01;R01;E01", nullptr));
        pushButton_ok->setText(QApplication::translate("ConfigWidget", "Ok", nullptr));
        pushButton_cancel->setText(QApplication::translate("ConfigWidget", "Cancel", nullptr));
        groupBox_Obs->setTitle(QApplication::translate("ConfigWidget", "SYS/#/OBS TYPES (Set the PPP dual-frequency observation type)", nullptr));
        gps_label->setText(QApplication::translate("ConfigWidget", "GPS:", nullptr));
        GPS_L1->setPlainText(QString());
        GPS_L2->setPlainText(QString());
        GLO_L1->setPlainText(QString());
        GLO_L2->setPlainText(QString());
        glo_label->setText(QApplication::translate("ConfigWidget", "GLONASS:", nullptr));
        BDS_L2->setPlainText(QString());
        BDS_L1->setPlainText(QString());
        bds_label->setText(QApplication::translate("ConfigWidget", "BDS:", nullptr));
        GAL_L2->setPlainText(QString());
        GAL_L1->setPlainText(QString());
        gal_label->setText(QApplication::translate("ConfigWidget", "Galileo:", nullptr));
        examp_obs->setText(QApplication::translate("ConfigWidget", "Example: GPS: L1C L2W", nullptr));
        groupBox_del_2->setTitle(QApplication::translate("ConfigWidget", "Set Parameters(m^2/30s)", nullptr));
        Qw_pos->setPlainText(QApplication::translate("ConfigWidget", "1e6", nullptr));
        Qw_label->setText(QApplication::translate("ConfigWidget", "Transfer noise (Qw):", nullptr));
        Qw_zwd->setPlainText(QApplication::translate("ConfigWidget", "3e-8", nullptr));
        Pk_label->setText(QApplication::translate("ConfigWidget", "Initial covariance (Pk):", nullptr));
        label->setText(QApplication::translate("ConfigWidget", "dynamic_pos", nullptr));
        label_2->setText(QApplication::translate("ConfigWidget", "zwd", nullptr));
        label_3->setText(QApplication::translate("ConfigWidget", "clk", nullptr));
        Qw_clk->setPlainText(QApplication::translate("ConfigWidget", "1e6", nullptr));
        label_4->setText(QApplication::translate("ConfigWidget", "amb", nullptr));
        Qw_amb->setPlainText(QApplication::translate("ConfigWidget", "1e-16", nullptr));
        label_5->setText(QApplication::translate("ConfigWidget", "ion", nullptr));
        Qw_ion->setPlainText(QApplication::translate("ConfigWidget", "0.1", nullptr));
        Pk_amb->setPlainText(QApplication::translate("ConfigWidget", "1e6", nullptr));
        Pk_pos->setPlainText(QApplication::translate("ConfigWidget", "1e6", nullptr));
        Pk_ion->setPlainText(QApplication::translate("ConfigWidget", "10", nullptr));
        Pk_clk->setPlainText(QApplication::translate("ConfigWidget", "1e6", nullptr));
        Pk_zwd->setPlainText(QApplication::translate("ConfigWidget", "10", nullptr));
        label_6->setText(QApplication::translate("ConfigWidget", "Carrier/Pseudorange precision (m):", nullptr));
        L_precision->setPlainText(QApplication::translate("ConfigWidget", "0.003", nullptr));
        P_precision->setPlainText(QApplication::translate("ConfigWidget", "3.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigWidget: public Ui_ConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWIDGET_H
