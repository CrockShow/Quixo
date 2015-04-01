#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsPixmapItem>

class Piece : public QGraphicsPixmapItem
{
public:
    Piece();
    int x;
    int y;
    int couleur;
};

#endif // PIECE_H
