#ifndef PERSON_H
#define PERSON_H
#include <QString>
class Person
{
public:

    void setName(QString& personName);

    void setRole(QString& personRole);


private:
    QString name;
    QString role;
};

#endif // PERSON_H
