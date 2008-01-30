#ifndef TRAYTOOLTIP_H
#define TRAYTOOLTIP_H
#include "BaseToolTip.h"
#include <QObject>
#include <QVector>
#include <QPair>

class TrayToolTip : public BaseToolTip
{
Q_OBJECT
public:
	TrayToolTip(QWidget* parent = 0);
	void regMove();
	void drawGraph(QPainter* painter);
	virtual void refresh();
private:
	int m_ticks;
	QVector<QPair<int,int> > m_values;
};

#endif