#include <iostream>
#include <stdio.h>
using namespace std;

//Write an application that copies a specified file from one location to another. Use only functions from the stdio.h header file.

int main()
{	
	FILE *fin;
	FILE *fout;
	
	fin = fopen("D:\\Info\\SomeImage.bmp", "rb");
	//  /Users/michael/Documents/SomeImage.bmp
	fout = fopen("D:\\Info\\OtherImage.bmp", "wb");
	
	int b;
	
	b = fgetc(fin);
	
	while (b != -1)
	{
		fputc(b, fout);
		b = fgetc(fin);
	}
	
	fclose(fin);
	fclose(fout);
}
