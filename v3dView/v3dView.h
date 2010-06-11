// /////////////////////////////////////////////////////////////////
// Generated by dtkPluginGenerator
// /////////////////////////////////////////////////////////////////

#ifndef V3DVIEW_H
#define V3DVIEW_H

#include <dtkCore/dtkAbstractData.h>
#include <dtkCore/dtkAbstractView.h>

#include "v3dViewPluginExport.h"

class QMouseEvent;

class v3dViewPrivate;
class vtkImageView;
class vtkRenderer;
class vtkRenderWindowInteractor;

class V3DVIEWPLUGIN_EXPORT v3dView : public dtkAbstractView
{
    Q_OBJECT

public:
             v3dView(void);
    virtual ~v3dView(void);

    virtual QString description(void) const;

    static bool registered(void);

signals:
    void closed(void);

public:
    void reset(void);
    void clear(void);
    void update(void);

    void   link(dtkAbstractView *other);
    void unlink(dtkAbstractView *other);

    void *view(void);

    void setData(dtkAbstractData *data);
    void *data (void);
    
    QWidget *widget(void);

    // access method to internal members for v3dView**Interactor classes
    vtkImageView *viewAxial(void);
    vtkImageView *viewCoronal(void);
    vtkImageView *viewSagittal(void);
    vtkImageView *view3D(void);
    
    vtkRenderWindowInteractor *interactor(void);
    
    vtkRenderer *rendererAxial(void);
    vtkRenderer *rendererCoronal(void);
    vtkRenderer *rendererSagittal(void);
    vtkRenderer *renderer3D(void);
    	
public slots:
    void onPropertySet         (QString key, QString value);
    void onOrientationPropertySet           (QString value);
    void onModePropertySet                  (QString value);
    void onVRModePropertySet                (QString value);
    void onPresetPropertySet                (QString value);
    void onScalarBarVisibilityPropertySet   (QString value);
    void onLookupTablePropertySet           (QString value);
    void onBackgroundLookupTablePropertySet (QString value);
    void onOpacityPropertySet               (QString value);
    void onShowAxisPropertySet              (QString value);
    void onLeftClickInteractionPropertySet  (QString value);
    void onCroppingPropertySet              (QString value);
    void onMousePressEvent                  (QMouseEvent *event);
    void onZSliderValueChanged              (int value);

    void onMetaDataSet(QString key, QString value);

public slots: // Menu interface
    void onMenuAxialTriggered        (void);
    void onMenuSagittalTriggered     (void);
    void onMenuCoronalTriggered      (void);
    void onMenu3DVRTriggered         (void);
    void onMenu3DMaxIPTriggered      (void);
    void onMenu3DMinIPTriggered      (void);
    void onMenu3DMPRTriggered        (void);
    void onMenu3DOffTriggered        (void);
    void onMenuZoomTriggered         (void);
    void onMenuWindowLevelTriggered  (void);
    
private:
    v3dViewPrivate *d;
};

dtkAbstractView *createV3dView(void);

#endif
