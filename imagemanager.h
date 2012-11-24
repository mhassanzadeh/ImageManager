#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

#include <QMainWindow>

namespace Ui {
class ImageManager;
}

class ImageManager : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ImageManager(QWidget *parent = 0);
    ~ImageManager();
    
private slots:
    void on_actionE_xit_triggered();

private:
    Ui::ImageManager *ui;
};

#endif // IMAGEMANAGER_H
