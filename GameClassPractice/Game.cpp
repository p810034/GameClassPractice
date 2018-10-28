#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() //建構子
{
	Debug("Game::Game()");
}

Game::~Game() //解構子
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