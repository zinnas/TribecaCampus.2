#ifndef FACULTY_H
#define FACULTY_H
#include "person.h"
#include <QString>
class Faculty : public Person
{
public:
    //Faculty(const QString& name, const QString& department);
    //QString getDepartment() const;
    Faculty();
    QString getFredInfo() const;
    QString getLianaInfo() const;
    QString getStephenInfo() const;
    QString getAllanInfo() const;
    QString getMarkInfo() const;
    QString getBarbaraInfo() const;
    QString getOlegInfo() const;
    QString getJasonInfo() const;
    QString getKeInfo() const;



private:

    QString fredInfo = "C:/Users/zin-n/Documents/LastVersion/fredInfo.txt";
    QString lianaInfo = "C:/Users/zin-n/Documents/LastVersion/lianaInfo.txt";
    QString stephenInfo = "C:/Users/zin-n/Documents/LastVersion/stephenInfo.txt";
    QString allanInfo = "C:/Users/zin-n/Documents/LastVersion/allanInfo.txt";
    QString markInfo = "C:/Users/zin-n/Documents/LastVersion/markInfo.txt";
    QString barbaraInfo = "C:/Users/zin-n/Documents/LastVersion/barbaraInfo.txt";
    QString olegInfo = "C:/Users/zin-n/Documents/LastVersion/olegInfo.txt";
    QString jasonInfo = "C:/Users/zin-n/Documents/LastVersion/jasonInfo.txt";
    QString keInfo = "C:/Users/zin-n/Documents/LastVersion/keInfo.txt";


};

#endif // FACULTY_H

