/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *serialPortComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *rateComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *checkBitComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *dataBitComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *stopBitComboBox;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *openPushButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QFrame *line_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *autoSendCheckBox;
    QCheckBox *hexShowCheckBox;
    QCheckBox *hexSendcheckBox;
    QCheckBox *autoClearSendcheckBox;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_22;
    QLineEdit *autoSendPeriodLineEdit;
    QLabel *label_23;
    QPushButton *clearRecvPushButton;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *sendPushButton1;
    QPushButton *sendPushButton2;
    QPushButton *sendPushButton3;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *sendPushButton4;
    QPushButton *sendPushButton5;
    QPushButton *sendPushButton6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *recvTextEdit;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_27;
    QTextEdit *sendTextEdit1;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_17;
    QLineEdit *sendLineEdit2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_18;
    QLineEdit *sendLineEdit3;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_19;
    QLineEdit *sendLineEdit4;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_20;
    QLineEdit *sendLineEdit5;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_21;
    QLineEdit *sendLineEdit6;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuyouibot;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 550);
        MainWindow->setMinimumSize(QSize(850, 550));
        MainWindow->setMaximumSize(QSize(850, 550));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/serialport.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(20, 10, 181, 241));
        groupBox->setMouseTracking(false);
        groupBox->setFocusPolicy(Qt::NoFocus);
        groupBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox->setAcceptDrops(false);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"	margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        groupBox->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        serialPortComboBox = new QComboBox(groupBox);
        serialPortComboBox->setObjectName(QStringLiteral("serialPortComboBox"));

        horizontalLayout->addWidget(serialPortComboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        rateComboBox = new QComboBox(groupBox);
        rateComboBox->setObjectName(QStringLiteral("rateComboBox"));

        horizontalLayout_2->addWidget(rateComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        checkBitComboBox = new QComboBox(groupBox);
        checkBitComboBox->setObjectName(QStringLiteral("checkBitComboBox"));

        horizontalLayout_3->addWidget(checkBitComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        dataBitComboBox = new QComboBox(groupBox);
        dataBitComboBox->setObjectName(QStringLiteral("dataBitComboBox"));

        horizontalLayout_4->addWidget(dataBitComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        stopBitComboBox = new QComboBox(groupBox);
        stopBitComboBox->setObjectName(QStringLiteral("stopBitComboBox"));

        horizontalLayout_5->addWidget(stopBitComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        openPushButton = new QPushButton(groupBox);
        openPushButton->setObjectName(QStringLiteral("openPushButton"));

        horizontalLayout_6->addWidget(openPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(200, 10, 20, 501));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 250, 661, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(20, 260, 181, 261));
        groupBox_2->setMouseTracking(false);
        groupBox_2->setFocusPolicy(Qt::NoFocus);
        groupBox_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_2->setAcceptDrops(false);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"	margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        groupBox_2->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        autoSendCheckBox = new QCheckBox(groupBox_2);
        autoSendCheckBox->setObjectName(QStringLiteral("autoSendCheckBox"));

        verticalLayout_4->addWidget(autoSendCheckBox);

        hexShowCheckBox = new QCheckBox(groupBox_2);
        hexShowCheckBox->setObjectName(QStringLiteral("hexShowCheckBox"));

        verticalLayout_4->addWidget(hexShowCheckBox);

        hexSendcheckBox = new QCheckBox(groupBox_2);
        hexSendcheckBox->setObjectName(QStringLiteral("hexSendcheckBox"));

        verticalLayout_4->addWidget(hexSendcheckBox);

        autoClearSendcheckBox = new QCheckBox(groupBox_2);
        autoClearSendcheckBox->setObjectName(QStringLiteral("autoClearSendcheckBox"));

        verticalLayout_4->addWidget(autoClearSendcheckBox);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_26->addWidget(label_22);

        autoSendPeriodLineEdit = new QLineEdit(groupBox_2);
        autoSendPeriodLineEdit->setObjectName(QStringLiteral("autoSendPeriodLineEdit"));

        horizontalLayout_26->addWidget(autoSendPeriodLineEdit);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_26->addWidget(label_23);


        verticalLayout_4->addLayout(horizontalLayout_26);

        clearRecvPushButton = new QPushButton(groupBox_2);
        clearRecvPushButton->setObjectName(QStringLiteral("clearRecvPushButton"));

        verticalLayout_4->addWidget(clearRecvPushButton);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        sendPushButton1 = new QPushButton(groupBox_2);
        sendPushButton1->setObjectName(QStringLiteral("sendPushButton1"));

        horizontalLayout_24->addWidget(sendPushButton1);

        sendPushButton2 = new QPushButton(groupBox_2);
        sendPushButton2->setObjectName(QStringLiteral("sendPushButton2"));

        horizontalLayout_24->addWidget(sendPushButton2);

        sendPushButton3 = new QPushButton(groupBox_2);
        sendPushButton3->setObjectName(QStringLiteral("sendPushButton3"));

        horizontalLayout_24->addWidget(sendPushButton3);


        verticalLayout_4->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        sendPushButton4 = new QPushButton(groupBox_2);
        sendPushButton4->setObjectName(QStringLiteral("sendPushButton4"));

        horizontalLayout_25->addWidget(sendPushButton4);

        sendPushButton5 = new QPushButton(groupBox_2);
        sendPushButton5->setObjectName(QStringLiteral("sendPushButton5"));

        horizontalLayout_25->addWidget(sendPushButton5);

        sendPushButton6 = new QPushButton(groupBox_2);
        sendPushButton6->setObjectName(QStringLiteral("sendPushButton6"));

        horizontalLayout_25->addWidget(sendPushButton6);


        verticalLayout_4->addLayout(horizontalLayout_25);


        verticalLayout_2->addLayout(verticalLayout_4);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setGeometry(QRect(220, 10, 621, 241));
        groupBox_3->setMouseTracking(false);
        groupBox_3->setFocusPolicy(Qt::NoFocus);
        groupBox_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_3->setAcceptDrops(false);
        groupBox_3->setAutoFillBackground(false);
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"	margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        groupBox_3->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        groupBox_3->setFlat(false);
        groupBox_3->setCheckable(false);
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        recvTextEdit = new QTextEdit(groupBox_3);
        recvTextEdit->setObjectName(QStringLiteral("recvTextEdit"));

        verticalLayout_6->addWidget(recvTextEdit);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setEnabled(true);
        groupBox_4->setGeometry(QRect(220, 260, 621, 261));
        groupBox_4->setMouseTracking(false);
        groupBox_4->setFocusPolicy(Qt::NoFocus);
        groupBox_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_4->setAcceptDrops(false);
        groupBox_4->setAutoFillBackground(false);
        groupBox_4->setStyleSheet(QLatin1String("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"	margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        groupBox_4->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        sendTextEdit1 = new QTextEdit(groupBox_4);
        sendTextEdit1->setObjectName(QStringLiteral("sendTextEdit1"));

        horizontalLayout_27->addWidget(sendTextEdit1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_19->addWidget(label_17);

        sendLineEdit2 = new QLineEdit(groupBox_4);
        sendLineEdit2->setObjectName(QStringLiteral("sendLineEdit2"));

        horizontalLayout_19->addWidget(sendLineEdit2);


        verticalLayout_7->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_20->addWidget(label_18);

        sendLineEdit3 = new QLineEdit(groupBox_4);
        sendLineEdit3->setObjectName(QStringLiteral("sendLineEdit3"));

        horizontalLayout_20->addWidget(sendLineEdit3);


        verticalLayout_7->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_21->addWidget(label_19);

        sendLineEdit4 = new QLineEdit(groupBox_4);
        sendLineEdit4->setObjectName(QStringLiteral("sendLineEdit4"));

        horizontalLayout_21->addWidget(sendLineEdit4);


        verticalLayout_7->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_22->addWidget(label_20);

        sendLineEdit5 = new QLineEdit(groupBox_4);
        sendLineEdit5->setObjectName(QStringLiteral("sendLineEdit5"));

        horizontalLayout_22->addWidget(sendLineEdit5);


        verticalLayout_7->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_23->addWidget(label_21);

        sendLineEdit6 = new QLineEdit(groupBox_4);
        sendLineEdit6->setObjectName(QStringLiteral("sendLineEdit6"));

        horizontalLayout_23->addWidget(sendLineEdit6);


        verticalLayout_7->addLayout(horizontalLayout_23);


        horizontalLayout_27->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_27);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 28));
        menuyouibot = new QMenu(menuBar);
        menuyouibot->setObjectName(QStringLiteral("menuyouibot"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuyouibot->menuAction());

        retranslateUi(MainWindow);

        rateComboBox->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\212\251\346\211\213\357\274\215\357\274\215by HQ", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\343\200\200\345\217\243\357\274\232\343\200\200", 0));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        rateComboBox->clear();
        rateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "300", 0)
         << QApplication::translate("MainWindow", "600", 0)
         << QApplication::translate("MainWindow", "1200", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "115200", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        checkBitComboBox->clear();
        checkBitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "NONE", 0)
         << QApplication::translate("MainWindow", "EVENT", 0)
         << QApplication::translate("MainWindow", "OLD", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        dataBitComboBox->clear();
        dataBitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "6", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        stopBitComboBox->clear();
        stopBitComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        openPushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234", 0));
        autoSendCheckBox->setText(QApplication::translate("MainWindow", "\350\207\252   \345\212\250   \345\217\221   \351\200\201 1", 0));
        hexShowCheckBox->setText(QApplication::translate("MainWindow", "\357\274\221 \357\274\226 \350\277\233 \345\210\266 \346\230\276 \347\244\272", 0));
        hexSendcheckBox->setText(QApplication::translate("MainWindow", "\357\274\221 \357\274\226 \350\277\233 \345\210\266 \345\217\221 \351\200\2011", 0));
        autoClearSendcheckBox->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\270\205\347\251\272\345\217\221\351\200\201\345\214\2722", 0));
        label_22->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\221\250\346\234\237\357\274\232", 0));
        autoSendPeriodLineEdit->setText(QApplication::translate("MainWindow", "500", 0));
        label_23->setText(QApplication::translate("MainWindow", "ms", 0));
        clearRecvPushButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", 0));
        sendPushButton1->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\221", 0));
        sendPushButton2->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\222", 0));
        sendPushButton3->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\223", 0));
        sendPushButton4->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\224", 0));
        sendPushButton5->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\225", 0));
        sendPushButton6->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\357\274\226", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
        label_17->setText(QApplication::translate("MainWindow", "2:", 0));
        sendLineEdit2->setPlaceholderText(QApplication::translate("MainWindow", "\345\233\236\350\275\246\346\227\266\345\217\221\351\200\201\346\215\242\350\241\214\347\254\246\357\274\214\344\270\215\345\233\236\346\230\276", 0));
        label_18->setText(QApplication::translate("MainWindow", "3:", 0));
        sendLineEdit3->setPlaceholderText(QApplication::translate("MainWindow", "\345\233\236\350\275\246\344\270\215\345\217\221\351\200\201\346\215\242\350\241\214\347\254\246\357\274\214\345\233\236\346\230\276", 0));
        label_19->setText(QApplication::translate("MainWindow", "4:", 0));
        sendLineEdit4->setPlaceholderText(QApplication::translate("MainWindow", "\345\233\236\350\275\246\344\270\215\345\217\221\351\200\201\346\215\242\350\241\214\347\254\246\357\274\214\345\233\236\346\230\276", 0));
        label_20->setText(QApplication::translate("MainWindow", "5:", 0));
        sendLineEdit5->setPlaceholderText(QApplication::translate("MainWindow", "\345\233\236\350\275\246\344\270\215\345\217\221\351\200\201\346\215\242\350\241\214\347\254\246\357\274\214\345\233\236\346\230\276", 0));
        label_21->setText(QApplication::translate("MainWindow", "6:", 0));
        sendLineEdit6->setPlaceholderText(QApplication::translate("MainWindow", "\345\233\236\350\275\246\344\270\215\345\217\221\351\200\201\346\215\242\350\241\214\347\254\246\357\274\214\345\233\236\346\230\276", 0));
        menuyouibot->setTitle(QApplication::translate("MainWindow", "youibot", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
