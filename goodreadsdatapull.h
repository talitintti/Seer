#ifndef GOODREADSDATAPULL_H
#define GOODREADSDATAPULL_H

#include "book.h"
#include "datahandler.h"

#include <QObject>
#include <QNetworkAccessManager>

class GoodreadsDataPull : public QObject
{
    Q_OBJECT
public:
    explicit GoodreadsDataPull(QObject *parent, DataHandler &handler);

    QList<Book> Search(QString &search_string, DataHandler &handler);

    ~GoodreadsDataPull()
    {
        delete network_manager;
    }


private:
    QNetworkAccessManager *network_manager;

private slots:
    void BookSearchParse(QNetworkReply *reply);
};

#endif // GOODREADSDATAPULL_H
