#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AUFE.h"

class AUFE : public QMainWindow
{
    Q_OBJECT

public:
    AUFE(QWidget *parent = Q_NULLPTR);

private:
    Ui::AUFEClass ui;
};
