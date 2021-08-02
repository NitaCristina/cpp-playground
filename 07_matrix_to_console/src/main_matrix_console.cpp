#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>


/**
	Define a simple matrix.
*/
class Matrix
{
private:
	size_t column_count;
	size_t line_count;

	// TODO: store the data
	// hints: you can use std::string, std::vectors + string, char**, vector<vector<char>>, etc
	//std::vector<std::vector<char> > mat;
	char mat[10][20];
	char p[20];
public:
	Matrix(size_t numColumnsX, size_t numLinesY)
		// TODO: add functionality
	{
		this->line_count = numLinesY;
		this->column_count = numColumnsX;
		// TODO: add functionality
	}

	// Set an entire line
	void setLine(size_t line_number, const std::string& data)
	{

		int i;
		for (i = 0; i < sizeof(p); i++) {
			p[i] = data[i];
			mat[line_number][i] = p[i];

		}	
		
	}

	//OPTIONAL
	//char getCellXY(size_t x, size_t y, char cell_content)
	//{
	//	// TODO: add functionality
	//	return 0;
	//}

	/**
		Sets the cell content for a specific cell identified by its coordinates (X and Y)
		@param x The horizontal coordinate of the cell to set. Index starts at zer0.
		@param y The vertical coordinate of the cell to set. Index starts at zer0.
		@param cell_content A cell char to set.

		E.g.
		 X axis: 0 -------- ... -------> Width
		 Y axis
		 0       0,0  1,0                W-1, 0
		 |       0,1  1,1                     
		 |       0,2                      
		 .                             
		 .                             
		 .                             
		 |       0, H-1     ...          W-1, H-1           
		 V

		 Height
	*/
	void setCellXY(size_t x, size_t y, char cell_content)
	{
		// TODO: add functionality
		
			mat[y][x] = cell_content;

		
	}

	void print()
	{
		for (int i = 0; i < line_count; i++)
		{
			for (int j = 0; j < column_count; j++)
			{
				std::cout << mat[i][j];
			}
			std::cout << std::endl;
		}

		// print all lines and columns
		// TODO: add functionality
	}
};

int main()
{
	// Create a matrix with the width of 20 and height of 10.
	Matrix matrix(20, 10);

	matrix.setLine(0, "X-----X----X-----XX-");
	matrix.setLine(1, "--X-----------------");
	matrix.setLine(2, "-----X--------------");
	matrix.setLine(3, "--------X-----------");
	matrix.setLine(4, "-----------X--------");
	matrix.setLine(5, "--------------X-----");
	matrix.setLine(6, "-----------------X--");
	matrix.setLine(7, "-------------------X");
	matrix.setLine(8, "------------------X-");
	matrix.setLine(9, "-----------------X--");

	matrix.print();
	std::cout << std::endl;
	// Would print
/*
X-----X----X-----XX-
--X-----------------
-----X--------------
--------X-----------
-----------X--------
--------------X-----
-----------------X--
-------------------X
------------------X-
-----------------X--
*/
	matrix.setCellXY(2, 1, '-');
	matrix.print();
	std::cout << std::endl;

	// Would print
/*
X-----X----X-----XX-
--------------------
-----X--------------
--------X-----------
-----------X--------
--------------X-----
-----------------X--
-------------------X
------------------X-
-----------------X--
*/

	matrix.setCellXY(3, 7, 'O');
	matrix.print();
	std::cout << std::endl;

/*
X-----X----X-----XX-
--------------------
-----X--------------
--------X-----------
-----------X--------
--------------X-----
-----------------X--
---O---------------X
------------------X-
-----------------X--
*/

	// This should silently fail (not trigger an error): cell Y=11 invalid due to limited height.
	//matrix.setCellXY(3, 11, 'O');
	return 0;
}