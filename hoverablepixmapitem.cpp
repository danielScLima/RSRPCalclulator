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
        tooltip = new QGraphicsSimpleTextItem(tooltipText); // Cria o texto
        tooltip->setZValue(1);                              // Garante que está acima de outros itens
        tooltip->setPos(event->scenePos());                // Define posição inicial
        tooltip->setBrush(Qt::black);                      // Define a cor
        scene->addItem(tooltip);                           // Adiciona à cena
    }
    qDebug() << "Tooltip created at:" << event->scenePos();
    QGraphicsPixmapItem::hoverEnterEvent(event);           // Chama evento base
}

void HoverablePixmapItem::hoverLeaveEvent(QGraphicsSceneHoverEvent* event)
{
    if (tooltip) {
        qDebug() << "Removing tooltip.";
        scene->removeItem(tooltip); // Remove o texto da cena
        delete tooltip;             // Deleta o item de texto
        tooltip = nullptr;          // Evita ponteiro pendente
    }
    QGraphicsPixmapItem::hoverLeaveEvent(event);           // Chama evento base
}
