#pragma once
#include<conio.h>
#include <stdio.h>
#include "windows.h"
#include"CPOINT.h"
#pragma comment(lib, "winmm.lib")
class CPEOPLE {
private:
    CPOINT a;
    bool isMuted;
public:
    CPEOPLE();
    void Draw();
    void Move();
    void Up();
    void Left();
    void Right();
    void Down();
    void Move_2(int x, int y);
    bool IsImpact(int x, int y);
    void Mute() { isMuted = true; };
    void _Mute() { isMuted = false; };
};