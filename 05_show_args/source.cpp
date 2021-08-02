#include "source.h"
#include <iostream>
#include <string>

void main(int argc, char *argv[]){

	if (argc <= 1)
	{
		std::cout<<"No program arguments found" <<std::endl;
	}

	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << "\n";
}