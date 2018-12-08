#ifndef TFJ_H
#define TFJ_H
#include <QJsonObject>



/*
    abstraktna klasa za objekte koje ce ici u json
    i koji ce se vaditi iz jsona, svaki objekat
    kojem ocemo da sacuvamo stanja treba da nasledi
    ovu klasu
    TFJ - ToFromJson
*/
class TFJ
{
public:
    virtual QJsonObject toJson()const = 0;
    virtual void fromJson(const QJsonObject& json) = 0;
    virtual ~TFJ(){}
};
#endif // TFJ_H
