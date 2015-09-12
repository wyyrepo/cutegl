#ifndef CAMERA_H
#define CAMERA_H
#include <QDebug>
#include <QVector3D>

namespace cgl {
class Camera : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVector3D position READ position WRITE setPosition)
    Q_PROPERTY(double phi READ phi WRITE setPhi)
    Q_PROPERTY(double theta READ theta WRITE setTheta)
public:
    Camera(QObject * parent =0);

    const QVector3D& position() const                  { return mPos; }
    void             setPosition(const QVector3D& pos) { mPos = pos;}
    void             incPhi(short int sign = +1)       { mPhi = mPhi + sign * mInc; updatePosition(); }
    void             incTheta(short int sign = +1)     { mTheta = mTheta + sign * mInc; updatePosition(); }
    void             incX(short int sign = +1)         { mDeltaX += sign * mInc; updatePosition(); }
    void             incY(short int sign = +1)         { mDeltaY += sign * mInc; updatePosition(); }
    void             setInc(double val)                { mInc *= val; }
    void             setPhi(double val)                { mPhi   += val; updatePosition(); }
    void             setTheta(double val)              { mTheta += val; updatePosition(); }
    double           phi() const                       { return mPhi;}
    double           theta() const                       { return mTheta;}
    void             reset();
    const QVector3D& target() const                    { return mTarget; }
    const QVector3D& up() const                        { return mUp; }
    void             zoom(short int sign = +1)         { mR += sign * mInc; updatePosition();}

protected:
    void      updatePosition();

private:
    double             mDeltaX;     // x shift with respect to 0 of camera position
    double             mDeltaY;     // y shift with respect to 0 of camera position
    double             mInc;        // incremental step of camera position
    QVector3D          mPos;        //  position
    double             mPhi;        // azimuth angle of
    double             mR;          // distance of  from view center
    QVector3D          mTarget;     // center of the scene that the  is looking at
    double             mTheta;      // polar angle of
    QVector3D          mUp;         // up direction with respect to

};
}
#endif // CAMERA_H
