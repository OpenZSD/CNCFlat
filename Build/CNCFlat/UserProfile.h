#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QString>

class UserProfile
{
public:
    UserProfile(QString appName);
    virtual bool setup(); //LIN VER
    bool setup(QString &name);

protected:
    virtual QString getHomePath(QString &name); //LIN VER

private:
    QString mAppName;
};

#endif // USERPROFILE_H
