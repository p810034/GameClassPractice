#ifndef __GAME_H__
#define __GAME_H__

class Game //宣告Game類別
{
public:
	Game();  //建構子
	~Game();  //解構子

	void TestLoop(void);  //函數
	void Debug(char* str); //字串函數 
};
#endif