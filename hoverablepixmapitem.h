#ifndef HOVERABLEPIXMAPITEM_H
#define HOVERABLEPIXMAPITEM_H

#include <QGraphicsPixmapItem>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsScene>

class HoverablePixmapItem : public QGraphicsPixmapItem
{
public:
    HoverablePixmapItem(const QPixmap& pixmap, const QString& text, QGraphicsScene* scene);

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override;

private:
    QString tooltipText;                 // Texto exibido ao passar o mouse
    QGraphicsScene* scene;               // Cena onde o item está
    QGraphicsSimpleTextItem* tooltip;    // Item de texto exibido ao hover
};

#endif // HOVERABLEPIXMAPITEM_H
