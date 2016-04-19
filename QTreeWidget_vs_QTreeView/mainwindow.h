#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include "ccustommodel.h"
#include "ccustommodelitem.h"
#include "crandomstringmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private slots:

        // TreeWidget slots
        void on_treeWidget_columnCountEdit_editingFinished();
        void on_treeWidget_sectionCountEdit_editingFinished();
        void on_treeWidget_intermittentRowsToAddEdit_editingFinished();
        void on_treeWidget_intermittentFrequencyToAddEdit_editingFinished();
        void on_treeWidget_intermittentStartButton_clicked();
        void on_treeWidget_intermittentStopButton_clicked();
        void on_treeWidget_instantAddButton_clicked();
        void on_treeWidget_resizeColumnsButton_clicked();
        void on_treeWidget_instantClearButton_clicked();
        void on_treeWidget_addItemTimerExpired();
        void on_treeWidget_expandAllButton_clicked();
        void on_treeWidget_collapseAllButton_clicked();


        // TreeView slots
        void on_treeView_intermittentRowsToAddEdit_editingFinished();
        void on_treeView_intermittentFrequencyToAddEdit_editingFinished();
        void on_treeView_intermittentStartButton_clicked();
        void on_treeView_intermittentStopButton_clicked();
        void on_treeView_instantRowsToAddEdit_editingFinished();
        void on_treeView_instantAddButton_clicked();
        void on_treeView_instantClearButton_clicked();
        void on_treeView_columnCountEdit_editingFinished();
        void on_treeView_resizeColumnsButton_clicked();
        void on_treeView_expandAllButton_clicked();
        void on_treeView_collapseAllButton_clicked();
        void on_treeView_sctionCountEdit_editingFinished();


        // Random string slots
        void on_randomStringGenerateButton_clicked();
        void on_randomStringClearButton_clicked();
        void on_clearLogButton_clicked();
        void on_randomStringMinLength_editingFinished();
        void on_randomStringMaxLength_editingFinished();
        void on_randomStringPrependWithStringEdit_toggled(bool checked);
        void on_randomStringInjectWithStringEdit_toggled(bool checked);
        void on_randomStringAppendWithStringEdit_toggled(bool checked);
        void on_randomStringPrependWithStringValueEdit_textChanged(const QString &arg1);
        void on_randomStringInjectWithStringValueEdit_textChanged(const QString &arg1);
        void on_randomStringAppendWithStringValueEdit_textChanged(const QString &arg1);

    private:

        // Other functions
        void Log( QString message );
        void SetStatus( QString status );
        void ClearStatus();
        void UpdateRandomStringCountLabel();
        void UpdateTreeWidgetRowCountLabel();


        Ui::MainWindow *ui;
        QTimer treeViewTimer, treeWidgetTimer;
        int treeWidgetRowCount;
        CCustomModel* treeViewModel;
        CRandomStringManager* randomStringManager;
};

#endif // MAINWINDOW_H
