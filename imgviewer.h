#ifndef IMGVIEWER_H
#define IMGVIEWER_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QImage>
#include <QPrinter>


class ImgViewer : public QGraphicsView
{
    Q_OBJECT


public:
    explicit ImgViewer(QWidget *parent = 0);

    bool loadFile(const QString &strFilePath, QString &strError);
    // bool loadFile(const QImage &image, QString &strError); TODO overload

    void resetView();
    void fitWindow();
    void originalSize();
    void rotateView(const int nVal);
    void printView();
    bool saveViewToDisk(QString &strError);
    inline bool isModified() { return m_rotateAngle!=0; }
    inline int getRotateAngle(){ return m_rotateAngle; }
    QString getImageFormat(QString strFileName);


private:
    mutable QImage m_image;
    QPixmap m_pixmap;
    QGraphicsPixmapItem *m_pixmapItem;
    QGraphicsScene *m_scene;
    int m_rotateAngle;
    bool m_IsFitWindow;
    bool m_IsViewInitialized;
    QString m_fileName;

#ifndef QT_NO_PRINTER
    QPrinter printer;
#endif


protected:
    virtual void wheelEvent(QWheelEvent * event);
    virtual void resizeEvent(QResizeEvent * event);


public slots:
    void reactToFitWindowToggle(bool);

};


#endif // IMGVIEWER_H
