#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QLabel *m_infoLabel;
    void enableControls(bool bEnable);
    QString formatByteSize(int nBytes);
    void updateStatusBarInfo(QString strFile);

private slots:
    void openImage();
    void closeImage();
    void printImage();
    void saveImage();
    void rotateImage();
    void on_actionAbout_triggered();
};

#endif // MAINWINDOW_H
