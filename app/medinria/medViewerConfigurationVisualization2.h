/* medViewerConfigurationVisualization2.h --- 
 * 
 * Author: Julien Wintz
 * Copyright (C) 2008 - Julien Wintz, Inria.
 * Created: Thu May 13 14:11:43 2010 (+0200)
 * Version: $Id$
 * Last-Updated: Thu May 13 14:22:37 2010 (+0200)
 *           By: Julien Wintz
 *     Update #: 5
 */

/* Commentary: 
 * 
 */

/* Change log:
 * 
 */

#ifndef medViewerConfigurationVisualization2_H
#define medViewerConfigurationVisualization2_H

#include <QtCore>

#include <medGui/medViewerConfiguration.h>


class medViewContainerStack;

class medViewerConfigurationVisualization2Private;

class medViewerConfigurationVisualization2 : public medViewerConfiguration
{
    Q_OBJECT

public:
     medViewerConfigurationVisualization2(QWidget *parent = 0);
    ~medViewerConfigurationVisualization2(void);
    
    virtual QString description(void) const;

    void setupViewContainerStack ();
        
private:
    medViewerConfigurationVisualization2Private *d;
};

medViewerConfiguration *createMedViewerConfigurationVisualization2(void);

#endif
