#include "hoverablepixmapitem.h"
#include <QGraphicsSceneHoverEvent>
#include <QDebug>

HoverablePixmapItem::HoverablePixmapItem(const QPixmap& pixmap, const QString& text, QGraphicsScene* scene)
    : QGraphicsPixmapItem(pixmap), tooltipText(text), scene(scene), tooltip(nullptr)
{
    setAcceptHoverEvents(true); // Habilita eventos de hover
}

void HoverablePixmapItem::hoverEnterEvent(QGraphicsSceneHoverEvent* event)
{
    if (!tooltip) {
        tooltip = std::make_unique<QGraphicsTextItem>(tooltipText); // Cria texto com smart pointer
        scene->addItem(tooltip.get());                             // Adiciona à cena
        tooltip->setDefaultTextColor(Qt::black);                   // Configura cor do texto
        tooltip->setPos(event->scenePos());                        // Define posição do texto
    }
    QGraphicsPixmapItem::hoverEnterEvent(event); // Chama evento base
}

void HoverablePixmapItem::hoverLeaveEvent(QGraphicsSceneHoverEvent* event)
{
    if (tooltip) {
        scene->removeItem(tooltip.get()); // Remove o texto da cena
        tooltip.reset();                  // Libera automaticamente o ponteiro
    }
    QGraphicsPixmapItem::hoverLeaveEvent(event); // Chama evento base
}
