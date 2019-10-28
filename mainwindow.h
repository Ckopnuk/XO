#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setPlayer(bool value);

private slots:
    void on_pushButton_1_clicked(bool checked);

private:
    bool player = true;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
