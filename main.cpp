#include <iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20; // map dimensions
int x,y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width; // sets the fruits to random coordinates on the map
    fruitY = rand() % height;
    score = 0;
}
void Draw()
{

}
void Input()
{

}
void Logic()
{

}
int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
    }
    return 0;

}