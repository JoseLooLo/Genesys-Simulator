/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionStart;
    QAction *actionStep;
    QAction *actionStop;
    QAction *actionPause;
    QAction *actionResume;
    QAction *actionClose;
    QAction *actionCheck;
    QAction *actionAbout;
    QAction *actionLicence;
    QAction *actionGet_Involved;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_11;
    QTabWidget *tabWidgetCentral;
    QWidget *tabModel;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidgetModel_2;
    QWidget *tabModelText;
    QVBoxLayout *verticalLayout_4;
    QWidget *tabModelGraphic;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_Graphic;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_ModelGraphic;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Zoom;
    QSlider *horizontalSlider_Zoom;
    QCheckBox *checkBox_ShowElements;
    QCheckBox *checkBox_ShowInternals;
    QCheckBox *checkBox_ShowLevels;
    QCheckBox *checkBox_ShowRecursive;
    QPushButton *pushButton_Export;
    QWidget *tabDebug;
    QVBoxLayout *verticalLayout_9;
    QTabWidget *tabWidget_Debug;
    QWidget *tab_Debug_Breakpoints;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *tableWidget_Breakpoints;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_Breakpoint_Insert;
    QPushButton *pushButton_Breakpoint_Remove;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_Debug_Variables;
    QVBoxLayout *verticalLayout_13;
    QTableWidget *tableWidget_Variables;
    QWidget *tabDebug_Entities;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *tableWidget_Entities;
    QWidget *tabSimulation;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_Simulation_Trace;
    QVBoxLayout *verticalLayout_7;
    QTextEdit *textEdit_Simulation;
    QWidget *tab_Simulation_Event;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *tableWidget_Simulation_Event;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_ReplicationNum;
    QLabel *label;
    QProgressBar *progressBarSimulation;
    QWidget *tabReport;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *textEdit_Reports;
    QMenuBar *menubar;
    QMenu *menuModel;
    QMenu *menuSimulation;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidgetConsole;
    QWidget *dockWidgetContentsConsole;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_Console;
    QDockWidget *dockWidgetPlugins;
    QWidget *dockWidgetContentsPlugin;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget_Plugins;
    QTreeWidget *treeWidget_Plugins;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1366, 731);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/3d bar chart.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDockNestingEnabled(true);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/new document.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/upload.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/download.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/exit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon5);
        actionStep = new QAction(MainWindow);
        actionStep->setObjectName(QString::fromUtf8("actionStep"));
        actionStep->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/next track.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep->setIcon(icon6);
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionStop->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon7);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/pause.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon8);
        actionResume = new QAction(MainWindow);
        actionResume->setObjectName(QString::fromUtf8("actionResume"));
        actionResume->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/fast-forward.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionResume->setIcon(icon9);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon10);
        actionCheck = new QAction(MainWindow);
        actionCheck->setObjectName(QString::fromUtf8("actionCheck"));
        actionCheck->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/yes.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheck->setIcon(icon11);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons1/resources/icons/pack1/ico/106.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon12);
        actionLicence = new QAction(MainWindow);
        actionLicence->setObjectName(QString::fromUtf8("actionLicence"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons2/resources/icons/pack2/ico/28.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLicence->setIcon(icon13);
        actionGet_Involved = new QAction(MainWindow);
        actionGet_Involved->setObjectName(QString::fromUtf8("actionGet_Involved"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/user group.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGet_Involved->setIcon(icon14);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        tabWidgetCentral = new QTabWidget(centralwidget);
        tabWidgetCentral->setObjectName(QString::fromUtf8("tabWidgetCentral"));
        tabWidgetCentral->setEnabled(false);
        QFont font;
        font.setPointSize(12);
        tabWidgetCentral->setFont(font);
        tabModel = new QWidget();
        tabModel->setObjectName(QString::fromUtf8("tabModel"));
        verticalLayout_3 = new QVBoxLayout(tabModel);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidgetModel_2 = new QTabWidget(tabModel);
        tabWidgetModel_2->setObjectName(QString::fromUtf8("tabWidgetModel_2"));
        tabWidgetModel_2->setTabPosition(QTabWidget::East);
        tabModelText = new QWidget();
        tabModelText->setObjectName(QString::fromUtf8("tabModelText"));
        verticalLayout_4 = new QVBoxLayout(tabModelText);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/text.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetModel_2->addTab(tabModelText, icon15, QString());
        tabModelGraphic = new QWidget();
        tabModelGraphic->setObjectName(QString::fromUtf8("tabModelGraphic"));
        verticalLayout_6 = new QVBoxLayout(tabModelGraphic);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea_Graphic = new QScrollArea(tabModelGraphic);
        scrollArea_Graphic->setObjectName(QString::fromUtf8("scrollArea_Graphic"));
        scrollArea_Graphic->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_Graphic->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 722, 284));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_ModelGraphic = new QLabel(scrollAreaWidgetContents);
        label_ModelGraphic->setObjectName(QString::fromUtf8("label_ModelGraphic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(label_ModelGraphic->sizePolicy().hasHeightForWidth());
        label_ModelGraphic->setSizePolicy(sizePolicy);
        label_ModelGraphic->setAutoFillBackground(true);
        label_ModelGraphic->setFrameShadow(QFrame::Plain);
        label_ModelGraphic->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_ModelGraphic);

        scrollArea_Graphic->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea_Graphic);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Zoom = new QLabel(tabModelGraphic);
        label_Zoom->setObjectName(QString::fromUtf8("label_Zoom"));

        horizontalLayout->addWidget(label_Zoom);

        horizontalSlider_Zoom = new QSlider(tabModelGraphic);
        horizontalSlider_Zoom->setObjectName(QString::fromUtf8("horizontalSlider_Zoom"));
        horizontalSlider_Zoom->setEnabled(false);
        horizontalSlider_Zoom->setMaximum(100);
        horizontalSlider_Zoom->setValue(50);
        horizontalSlider_Zoom->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_Zoom);

        checkBox_ShowElements = new QCheckBox(tabModelGraphic);
        checkBox_ShowElements->setObjectName(QString::fromUtf8("checkBox_ShowElements"));
        checkBox_ShowElements->setChecked(false);

        horizontalLayout->addWidget(checkBox_ShowElements);

        checkBox_ShowInternals = new QCheckBox(tabModelGraphic);
        checkBox_ShowInternals->setObjectName(QString::fromUtf8("checkBox_ShowInternals"));
        checkBox_ShowInternals->setChecked(false);

        horizontalLayout->addWidget(checkBox_ShowInternals);

        checkBox_ShowLevels = new QCheckBox(tabModelGraphic);
        checkBox_ShowLevels->setObjectName(QString::fromUtf8("checkBox_ShowLevels"));

        horizontalLayout->addWidget(checkBox_ShowLevels);

        checkBox_ShowRecursive = new QCheckBox(tabModelGraphic);
        checkBox_ShowRecursive->setObjectName(QString::fromUtf8("checkBox_ShowRecursive"));

        horizontalLayout->addWidget(checkBox_ShowRecursive);

        pushButton_Export = new QPushButton(tabModelGraphic);
        pushButton_Export->setObjectName(QString::fromUtf8("pushButton_Export"));

        horizontalLayout->addWidget(pushButton_Export);


        verticalLayout_6->addLayout(horizontalLayout);

        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/mxgraph/resources/icons/pack4/iconsMxGraph/vertical.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidgetModel_2->addTab(tabModelGraphic, icon16, QString());

        verticalLayout_3->addWidget(tabWidgetModel_2);

        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/list.ico"), QSize(), QIcon::Normal, QIcon::On);
        tabWidgetCentral->addTab(tabModel, icon17, QString());
        tabDebug = new QWidget();
        tabDebug->setObjectName(QString::fromUtf8("tabDebug"));
        verticalLayout_9 = new QVBoxLayout(tabDebug);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        tabWidget_Debug = new QTabWidget(tabDebug);
        tabWidget_Debug->setObjectName(QString::fromUtf8("tabWidget_Debug"));
        tabWidget_Debug->setTabPosition(QTabWidget::East);
        tab_Debug_Breakpoints = new QWidget();
        tab_Debug_Breakpoints->setObjectName(QString::fromUtf8("tab_Debug_Breakpoints"));
        verticalLayout_10 = new QVBoxLayout(tab_Debug_Breakpoints);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        tableWidget_Breakpoints = new QTableWidget(tab_Debug_Breakpoints);
        if (tableWidget_Breakpoints->columnCount() < 3)
            tableWidget_Breakpoints->setColumnCount(3);
        tableWidget_Breakpoints->setObjectName(QString::fromUtf8("tableWidget_Breakpoints"));
        tableWidget_Breakpoints->setEnabled(false);
        tableWidget_Breakpoints->setColumnCount(3);
        tableWidget_Breakpoints->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_10->addWidget(tableWidget_Breakpoints);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_Breakpoint_Insert = new QPushButton(tab_Debug_Breakpoints);
        pushButton_Breakpoint_Insert->setObjectName(QString::fromUtf8("pushButton_Breakpoint_Insert"));

        horizontalLayout_6->addWidget(pushButton_Breakpoint_Insert);

        pushButton_Breakpoint_Remove = new QPushButton(tab_Debug_Breakpoints);
        pushButton_Breakpoint_Remove->setObjectName(QString::fromUtf8("pushButton_Breakpoint_Remove"));

        horizontalLayout_6->addWidget(pushButton_Breakpoint_Remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_10->addLayout(horizontalLayout_6);

        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/abort.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Debug->addTab(tab_Debug_Breakpoints, icon18, QString());
        tab_Debug_Variables = new QWidget();
        tab_Debug_Variables->setObjectName(QString::fromUtf8("tab_Debug_Variables"));
        verticalLayout_13 = new QVBoxLayout(tab_Debug_Variables);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        tableWidget_Variables = new QTableWidget(tab_Debug_Variables);
        if (tableWidget_Variables->columnCount() < 3)
            tableWidget_Variables->setColumnCount(3);
        tableWidget_Variables->setObjectName(QString::fromUtf8("tableWidget_Variables"));
        tableWidget_Variables->setEnabled(false);
        tableWidget_Variables->setColumnCount(3);
        tableWidget_Variables->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_13->addWidget(tableWidget_Variables);

        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons1/resources/icons/pack1/ico/35.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Debug->addTab(tab_Debug_Variables, icon19, QString());
        tabDebug_Entities = new QWidget();
        tabDebug_Entities->setObjectName(QString::fromUtf8("tabDebug_Entities"));
        verticalLayout_12 = new QVBoxLayout(tabDebug_Entities);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        tableWidget_Entities = new QTableWidget(tabDebug_Entities);
        if (tableWidget_Entities->columnCount() < 3)
            tableWidget_Entities->setColumnCount(3);
        tableWidget_Entities->setObjectName(QString::fromUtf8("tableWidget_Entities"));
        tableWidget_Entities->setEnabled(false);
        tableWidget_Entities->setColumnCount(3);
        tableWidget_Entities->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_12->addWidget(tableWidget_Entities);

        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/yellow pin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Debug->addTab(tabDebug_Entities, icon20, QString());

        verticalLayout_9->addWidget(tabWidget_Debug);

        tabWidgetCentral->addTab(tabDebug, QString());
        tabSimulation = new QWidget();
        tabSimulation->setObjectName(QString::fromUtf8("tabSimulation"));
        verticalLayout_2 = new QVBoxLayout(tabSimulation);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(tabSimulation);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::East);
        tab_Simulation_Trace = new QWidget();
        tab_Simulation_Trace->setObjectName(QString::fromUtf8("tab_Simulation_Trace"));
        verticalLayout_7 = new QVBoxLayout(tab_Simulation_Trace);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        textEdit_Simulation = new QTextEdit(tab_Simulation_Trace);
        textEdit_Simulation->setObjectName(QString::fromUtf8("textEdit_Simulation"));
        QFont font1;
        font1.setPointSize(10);
        textEdit_Simulation->setFont(font1);
        textEdit_Simulation->setLineWrapMode(QTextEdit::NoWrap);
        textEdit_Simulation->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_7->addWidget(textEdit_Simulation);

        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/movie.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_Simulation_Trace, icon21, QString());
        tab_Simulation_Event = new QWidget();
        tab_Simulation_Event->setObjectName(QString::fromUtf8("tab_Simulation_Event"));
        verticalLayout_8 = new QVBoxLayout(tab_Simulation_Event);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tableWidget_Simulation_Event = new QTableWidget(tab_Simulation_Event);
        if (tableWidget_Simulation_Event->columnCount() < 3)
            tableWidget_Simulation_Event->setColumnCount(3);
        tableWidget_Simulation_Event->setObjectName(QString::fromUtf8("tableWidget_Simulation_Event"));
        tableWidget_Simulation_Event->setFont(font1);
        tableWidget_Simulation_Event->setWordWrap(false);
        tableWidget_Simulation_Event->setRowCount(0);
        tableWidget_Simulation_Event->setColumnCount(3);

        verticalLayout_8->addWidget(tableWidget_Simulation_Event);

        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/table.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_Simulation_Event, icon22, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(tabSimulation);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_ReplicationNum = new QLabel(tabSimulation);
        label_ReplicationNum->setObjectName(QString::fromUtf8("label_ReplicationNum"));

        horizontalLayout_3->addWidget(label_ReplicationNum);

        label = new QLabel(tabSimulation);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        progressBarSimulation = new QProgressBar(tabSimulation);
        progressBarSimulation->setObjectName(QString::fromUtf8("progressBarSimulation"));
        progressBarSimulation->setValue(0);

        horizontalLayout_3->addWidget(progressBarSimulation);


        verticalLayout_2->addLayout(horizontalLayout_3);

        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icons2/resources/icons/pack2/ico/19.ico"), QSize(), QIcon::Normal, QIcon::On);
        tabWidgetCentral->addTab(tabSimulation, icon23, QString());
        tabReport = new QWidget();
        tabReport->setObjectName(QString::fromUtf8("tabReport"));
        horizontalLayout_4 = new QHBoxLayout(tabReport);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textEdit_Reports = new QTextEdit(tabReport);
        textEdit_Reports->setObjectName(QString::fromUtf8("textEdit_Reports"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font2.setPointSize(10);
        textEdit_Reports->setFont(font2);
        textEdit_Reports->setLineWrapMode(QTextEdit::NoWrap);
        textEdit_Reports->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(textEdit_Reports);

        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icons2/resources/icons/pack2/ico/16.ico"), QSize(), QIcon::Normal, QIcon::On);
        tabWidgetCentral->addTab(tabReport, icon24, QString());

        verticalLayout_11->addWidget(tabWidgetCentral);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1366, 24));
        menuModel = new QMenu(menubar);
        menuModel->setObjectName(QString::fromUtf8("menuModel"));
        menuSimulation = new QMenu(menubar);
        menuSimulation->setObjectName(QString::fromUtf8("menuSimulation"));
        menuSimulation->setEnabled(false);
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidgetConsole = new QDockWidget(MainWindow);
        dockWidgetConsole->setObjectName(QString::fromUtf8("dockWidgetConsole"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetConsole->sizePolicy().hasHeightForWidth());
        dockWidgetConsole->setSizePolicy(sizePolicy1);
        dockWidgetConsole->setMinimumSize(QSize(100, 109));
        dockWidgetConsole->setBaseSize(QSize(100, 100));
        dockWidgetConsole->setAutoFillBackground(false);
        dockWidgetConsole->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetConsole->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContentsConsole = new QWidget();
        dockWidgetContentsConsole->setObjectName(QString::fromUtf8("dockWidgetContentsConsole"));
        verticalLayout = new QVBoxLayout(dockWidgetContentsConsole);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit_Console = new QTextEdit(dockWidgetContentsConsole);
        textEdit_Console->setObjectName(QString::fromUtf8("textEdit_Console"));
        textEdit_Console->setFont(font1);
        textEdit_Console->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(textEdit_Console);

        dockWidgetConsole->setWidget(dockWidgetContentsConsole);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidgetConsole);
        dockWidgetPlugins = new QDockWidget(MainWindow);
        dockWidgetPlugins->setObjectName(QString::fromUtf8("dockWidgetPlugins"));
        sizePolicy1.setHeightForWidth(dockWidgetPlugins->sizePolicy().hasHeightForWidth());
        dockWidgetPlugins->setSizePolicy(sizePolicy1);
        dockWidgetPlugins->setBaseSize(QSize(100, 100));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icons3/resources/icons/pack3/ico/component.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dockWidgetPlugins->setWindowIcon(icon25);
        dockWidgetPlugins->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetPlugins->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContentsPlugin = new QWidget();
        dockWidgetContentsPlugin->setObjectName(QString::fromUtf8("dockWidgetContentsPlugin"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContentsPlugin);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        listWidget_Plugins = new QListWidget(dockWidgetContentsPlugin);
        listWidget_Plugins->setObjectName(QString::fromUtf8("listWidget_Plugins"));

        horizontalLayout_2->addWidget(listWidget_Plugins);

        treeWidget_Plugins = new QTreeWidget(dockWidgetContentsPlugin);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget_Plugins->setHeaderItem(__qtreewidgetitem);
        treeWidget_Plugins->setObjectName(QString::fromUtf8("treeWidget_Plugins"));
        treeWidget_Plugins->header()->setVisible(false);
        treeWidget_Plugins->header()->setCascadingSectionResizes(false);

        horizontalLayout_2->addWidget(treeWidget_Plugins);

        dockWidgetPlugins->setWidget(dockWidgetContentsPlugin);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidgetPlugins);
        QWidget::setTabOrder(textEdit_Reports, tabWidgetCentral);

        menubar->addAction(menuModel->menuAction());
        menubar->addAction(menuSimulation->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuModel->addAction(actionNew);
        menuModel->addSeparator();
        menuModel->addAction(actionOpen);
        menuModel->addAction(actionSave);
        menuModel->addAction(actionClose);
        menuModel->addSeparator();
        menuModel->addAction(actionCheck);
        menuModel->addSeparator();
        menuModel->addAction(actionExit);
        menuSimulation->addAction(actionStart);
        menuSimulation->addAction(actionStep);
        menuSimulation->addAction(actionStop);
        menuSimulation->addSeparator();
        menuSimulation->addAction(actionPause);
        menuSimulation->addAction(actionResume);
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionLicence);
        menuAbout->addAction(actionGet_Involved);
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionClose);
        toolBar->addSeparator();
        toolBar->addAction(actionCheck);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionStart);
        toolBar->addAction(actionStep);
        toolBar->addAction(actionStop);
        toolBar->addSeparator();
        toolBar->addAction(actionPause);
        toolBar->addAction(actionResume);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionLicence);

        retranslateUi(MainWindow);

        tabWidgetCentral->setCurrentIndex(3);
        tabWidgetModel_2->setCurrentIndex(1);
        tabWidget_Debug->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GenESyS - Generic and Expansible System Simulator", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "New Model", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "Open Model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "Save Model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "Exit Genesys", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
#if QT_CONFIG(tooltip)
        actionStart->setToolTip(QCoreApplication::translate("MainWindow", "Start Simulation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStart->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
#if QT_CONFIG(tooltip)
        actionStep->setToolTip(QCoreApplication::translate("MainWindow", "Step Simulation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStep->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        actionStop->setToolTip(QCoreApplication::translate("MainWindow", "Stop Simulation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionStop->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPause->setToolTip(QCoreApplication::translate("MainWindow", "Pause Simulation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPause->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResume->setText(QCoreApplication::translate("MainWindow", "Resume", nullptr));
#if QT_CONFIG(tooltip)
        actionResume->setToolTip(QCoreApplication::translate("MainWindow", "Resume Simulation", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionResume->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("MainWindow", "Close Model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheck->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
#if QT_CONFIG(tooltip)
        actionCheck->setToolTip(QCoreApplication::translate("MainWindow", "Check Model", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCheck->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "Genesys", nullptr));
#if QT_CONFIG(tooltip)
        actionAbout->setToolTip(QCoreApplication::translate("MainWindow", "About Genesys", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLicence->setText(QCoreApplication::translate("MainWindow", "Licence", nullptr));
#if QT_CONFIG(tooltip)
        actionLicence->setToolTip(QCoreApplication::translate("MainWindow", "About Licence", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGet_Involved->setText(QCoreApplication::translate("MainWindow", "Get Involved", nullptr));
#if QT_CONFIG(tooltip)
        actionGet_Involved->setToolTip(QCoreApplication::translate("MainWindow", "Get Involved in Genesys", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidgetModel_2->setTabText(tabWidgetModel_2->indexOf(tabModelText), QCoreApplication::translate("MainWindow", "Text", nullptr));
        label_ModelGraphic->setText(QString());
        label_Zoom->setText(QCoreApplication::translate("MainWindow", "  Zoom:", nullptr));
        checkBox_ShowElements->setText(QCoreApplication::translate("MainWindow", "Show elements", nullptr));
        checkBox_ShowInternals->setText(QCoreApplication::translate("MainWindow", "Show internals", nullptr));
        checkBox_ShowLevels->setText(QCoreApplication::translate("MainWindow", "Show Levels", nullptr));
        checkBox_ShowRecursive->setText(QCoreApplication::translate("MainWindow", "Recursive", nullptr));
        pushButton_Export->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        tabWidgetModel_2->setTabText(tabWidgetModel_2->indexOf(tabModelGraphic), QCoreApplication::translate("MainWindow", "Graphic", nullptr));
        tabWidgetCentral->setTabText(tabWidgetCentral->indexOf(tabModel), QCoreApplication::translate("MainWindow", "Model", nullptr));
#if QT_CONFIG(tooltip)
        tabWidgetCentral->setTabToolTip(tabWidgetCentral->indexOf(tabModel), QCoreApplication::translate("MainWindow", "Model in Genesys Simulation Language", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Breakpoint_Insert->setText(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        pushButton_Breakpoint_Remove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        tabWidget_Debug->setTabText(tabWidget_Debug->indexOf(tab_Debug_Breakpoints), QCoreApplication::translate("MainWindow", "Breakpoints", nullptr));
        tabWidget_Debug->setTabText(tabWidget_Debug->indexOf(tab_Debug_Variables), QCoreApplication::translate("MainWindow", "Variables", nullptr));
        tabWidget_Debug->setTabText(tabWidget_Debug->indexOf(tabDebug_Entities), QCoreApplication::translate("MainWindow", "Entities", nullptr));
        tabWidgetCentral->setTabText(tabWidgetCentral->indexOf(tabDebug), QCoreApplication::translate("MainWindow", "Debug", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Simulation_Trace), QCoreApplication::translate("MainWindow", "Trace", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Simulation_Event), QCoreApplication::translate("MainWindow", "Events", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Replication ", nullptr));
        label_ReplicationNum->setText(QCoreApplication::translate("MainWindow", "1/1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        tabWidgetCentral->setTabText(tabWidgetCentral->indexOf(tabSimulation), QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        tabWidgetCentral->setTabText(tabWidgetCentral->indexOf(tabReport), QCoreApplication::translate("MainWindow", "Reports", nullptr));
        menuModel->setTitle(QCoreApplication::translate("MainWindow", "Model", nullptr));
        menuSimulation->setTitle(QCoreApplication::translate("MainWindow", "Simulation", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        dockWidgetConsole->setWindowTitle(QCoreApplication::translate("MainWindow", "Console", nullptr));
        dockWidgetPlugins->setWindowTitle(QCoreApplication::translate("MainWindow", "Plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
