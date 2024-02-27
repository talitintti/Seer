#include "goodreadsdatapull.h"

GoodreadsDataPull::GoodreadsDataPull(QObject *parent)
    : QObject{parent}
{
    network_manager = new QNetworkAccessManager(this);
}


QList<Book> GoodreadsDataPull::Search(QString &search_string)
{
    connect(network_manager, &QNetworkAccessManager::finished,
             )
}
