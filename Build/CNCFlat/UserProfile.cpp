#include "UserProfile.h"
#include <stdio.h>
#include <QProcessEnvironment>

UserProfile::UserProfile(QString appName): mAppName(appName) { }

bool UserProfile::setup()
{
    QString userName = QProcessEnvironment::systemEnvironment().value("USER");
    return setup(userName);
}

bool UserProfile::setup(QString &name)
{
    return false;
}

QString UserProfile::getHomePath(QString &name)
{
    return QString("/home/") + name + QString("/");
}
