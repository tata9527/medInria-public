#pragma once
/*=========================================================================

 medInria

 Copyright (c) INRIA 2013 - 2020. All rights reserved.
 See LICENSE.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

=========================================================================*/

#include <QObject>

#include <medCoreExport.h>

class medIntParameter;

class medAbstractJobPrivate;
class MEDCORE_EXPORT medAbstractJob: public QObject
{
    Q_OBJECT

public:
    enum medJobExitStatus
    {
        MED_JOB_EXIT_FAILURE,
        MED_JOB_EXIT_CANCELLED,
        MED_JOB_EXIT_SUCCESS
    };
    Q_ENUMS(medJobExitStatus)


    medAbstractJob(QObject *parent = nullptr);
    virtual ~medAbstractJob();

    virtual QString caption() const = 0;

public:
    virtual medJobExitStatus run() = 0;
    virtual void cancel() = 0;
    bool isRunning() const;

    medIntParameter* progression() const;

signals:
    void finished(medJobExitStatus exitStatus);

private slots:
    void _setIsRunning(bool isRunning);
    void _resetProgression();

signals:
    void running(bool isRunning);

private:
    const QScopedPointer<medAbstractJobPrivate> d;
};
