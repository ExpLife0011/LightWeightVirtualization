// FileManipulatingExe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	cout << "Creating new file : " << endl;
	Sleep(5000);
	ofstream ofile;
	ofile.open("C:\\boot-repair\\file.txt");
	ofile << "Hello my name is vaibhav";
	ofile.close();

	return 0;
}

