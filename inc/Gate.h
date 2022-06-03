#ifndef _GATE_
#define _GATE_

#include <ctime>
#include <cstdlib>

#include "Wall.h"

using namespace std;

class Gate
{
private:
    pair<Point, Point> gates;
    int gate_num = 0;
    bool passing_snake = false;
public:
    Gate(GameField &gf, Wall &wall);
    ~Gate();
    Point pass_gate();
    int entry_direction();
    //생성자에 진행 방향 담기.
};

#endif