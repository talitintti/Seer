#ifndef GOODREADSDATAPULL_H
#define GOODREADSDATAPULL_H

#include <QObject>
#include <QNetworkAccessManager>
#include "book.h"

class GoodreadsDataPull : public QObject
{
    Q_OBJECT
public:
    explicit GoodreadsDataPull(QObject *parent = nullptr);
    QList<Book> Search(QString &search_string);

private:
    QNetworkAccessManager *network_manager;
signals:
};

#endif // GOODREADSDATAPULL_H
