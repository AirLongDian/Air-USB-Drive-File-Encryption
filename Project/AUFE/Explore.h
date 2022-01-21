#pragma once

#include <QWidget>
#include "ui_Explore.h"

class Explore : public QWidget
{
	Q_OBJECT

public:
	Explore(QWidget *parent = Q_NULLPTR);
	~Explore();

private:
	Ui::Explore ui;
};
