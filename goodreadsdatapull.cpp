#include "goodreadsdatapull.h"

GoodreadsDataPull::GoodreadsDataPull(QObject *parent, DataHandler &handler)
    : QObject{parent}
{
    network_manager = new QNetworkAccessManager(this);

    connect(network_manager, &QNetworkAccessManager::finished, this, &GoodreadsDataPull::BookSearchParse);
}

void GoodreadsDataPull::BookSearchParse(QNetworkReply *reply)
{

}

QList<Book> GoodreadsDataPull::Search(QString &search_string, DataHandler &handler)
{

    network_manager->get(QNetworkRequest(QUrl("http://qt-project.org")));
}

