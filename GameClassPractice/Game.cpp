#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() //�غc�l
{
	Debug("Game::Game()");
}

Game::~Game() //�Ѻc�l
{
	Debug("Game::~Game()");
}

void Game::TestLoop(void)
{
	Debug("TestLoop");
}

void Game::Debug(char* str)
{
	cout << "[MyDebugMessage]:" << str << endl;
}