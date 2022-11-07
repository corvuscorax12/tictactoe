#pragma once
#include <string>
class Board
{
private:
	//Select part of tic-tac-toe grid
	int selected;
	///tic-tac-toe grid
	int matrix[9];
public:
	/// <summary>
	/// Constructs the t-t-t board
	/// </summary>
	Board();
	
	
	void reset();
	
	
	void change(int selection, int type);

	std::string refreshBoard();



};

