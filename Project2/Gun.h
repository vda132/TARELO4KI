#ifndef GUN_H
#define GUN_H

#include<SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
class Gun {
public:
	int amount;
	Sprite gun;
	double accurancy;
	float dX = 0;
	float dY = 0;
};
#endif