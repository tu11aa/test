#include"CPEOPLE.h"

void CPEOPLE::Move()
{
    if (_kbhit() && isMuted)
    {
        char current = _getch();
        if (current == 'w') {
            Up();
            PlaySound(L"move.wav", NULL, SND_FILENAME | SND_ASYNC);
        }
        if (current == 'a') {
            Left();
            PlaySound(L"move.wav", NULL, SND_FILENAME | SND_ASYNC);
        }
        if (current == 's') {
            Down();
            PlaySound(L"move.wav", NULL, SND_FILENAME | SND_ASYNC);
        }
        if (current == 'd') {
            Right();
            PlaySound(L"move.wav", NULL, SND_FILENAME | SND_ASYNC);
        }
    }

    else if (_kbhit() && !isMuted)
    {
        char current = _getch();
        if (current == 'w') {
            Up();
        }
        if (current == 'a') {
            Left();
        }
        if (current == 's') {
            Down();
        }
        if (current == 'd') {
            Right();
        }
    }
}
CPEOPLE::CPEOPLE()
{
    a.setX(0);
    a.setY(0);
}
void CPEOPLE::Draw()
{
    TextColor(blue);
    GoToXY(a.getX(), a.getY());
    cout << char(220) << char(219) << char(223) << char(219) << char(220);
    GoToXY(a.getX(), a.getY() + 1);
    cout << ' ' << char(219) << char(223) << char(219);
}
//
void CPEOPLE::Move_2(int x, int y)
{
    a.setX(x);
    a.setY(y);
}

void CPEOPLE::Up()
{
    Move_2(a.getX(), a.getY() - 1);
}

void CPEOPLE::Left()
{
    Move_2(a.getX() - 1, a.getY());
}

void CPEOPLE::Right()
{
    Move_2(a.getX() + 1, a.getY());
}

void CPEOPLE::Down()
{
    Move_2(a.getX(), a.getY() + 1);
}

bool CPEOPLE::IsImpact(int x, int y) {
    CPOINT _p;
    _p.setX(p.getX() + 5);
    _p.setY(p.getY() + 1);
    if (x > p.getX() && x<_p.getX() && y>p.getY() && y < _p.getY()) return true;
    else return false;
}