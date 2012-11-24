#include "imagemanager.h"
#include "ui_imagemanager.h"

ImageManager::ImageManager(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageManager)
{
    ui->setupUi(this);
}

ImageManager::~ImageManager()
{
    delete ui;
}

void ImageManager::on_actionE_xit_triggered()
{
    exit(0);
}
