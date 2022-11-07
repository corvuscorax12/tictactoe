#include "Board.h"

Board::Board()
{
	for (int i = 0; i < 8; i++)
	{
		 matrix[i] = 0;
	}

}
void Board::change(int selection, int type)
{
	matrix[selection] = type;
}



std::string Board::refreshBoard()
{
	using namespace std;
	char mark[9];

	for (int i = 0; i < 9; i++)
	{
		switch (matrix[i])
		{
		case 0:
			mark[i] = ' ';
			break;
		case 1:
			mark[i] = 'X';
			break;
		case 2:
			mark[i] = 'O';
			break;
		default:
			mark[i] = 'E';
			break;
		}
	}
	string output;
	for (int i = 0; i < 9; i++)
	{
		int enter = i % 3;
		enter += 1;
		output.push_back(mark[i]);
		output.push_back(' ');
		if (enter == 3 && i != 0)
		{
			output.push_back('\n');
		}
		
	
		

	}

	return output;

}

