#ifndef DATAMEDIATOR_H
#define DATAMEDIATOR_H

#include <QObject>

class DataMediator : public QObject
{
    Q_OBJECT
public:
    explicit DataMediator(QObject *parent = nullptr);

signals:
};

#endif // DATAMEDIATOR_H
