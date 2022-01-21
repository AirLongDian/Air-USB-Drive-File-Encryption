#include "AUFE.h"

AUFE::AUFE(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowFlags(Qt::FramelessWindowHint);
    ui.setupUi(this);
}
