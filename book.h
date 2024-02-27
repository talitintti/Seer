#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include <QDate>
#include <QUrl>
struct Book {
    QString name;
    QString author;
    int rating_count;
    float rating_avg;
    QDate publishing_date;
    QUrl image_uri;
};

#endif // BOOK_H
