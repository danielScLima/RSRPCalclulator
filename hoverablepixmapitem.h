#ifndef HOVERABLEPIXMAPITEM_H
#define HOVERABLEPIXMAPITEM_H

#include <QGraphicsPixmapItem>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <memory> // Para std::unique_ptr

class HoverablePixmapItem : public QGraphicsPixmapItem
{
public:
    HoverablePixmapItem(const QPixmap& pixmap, const QString& text, QGraphicsScene* scene);

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override;

private:
    QString tooltipText;                             // Texto exibido ao passar o mouse
    QGraphicsScene* scene;                           // Cena onde o item está
    std::unique_ptr<QGraphicsTextItem> tooltip;      // Gerenciamento seguro do texto
};

#endif // HOVERABLEPIXMAPITEM_H
