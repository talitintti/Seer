#ifndef DATAHANDLER_H
#define DATAHANDLER_H

#include "book.h"

#include <QObject>
#include <QList>

class DataHandler : public QObject
{
    Q_OBJECT
public:
    explicit DataHandler(QObject *parent = nullptr);

public slots:
    void HandleSearchResults(QList<Book> &found_books);
    void AskForBooks(QString &search_term);
    void SearchResults(QList<Book> &found_books);

};

#endif // DATAHANDLER_H
