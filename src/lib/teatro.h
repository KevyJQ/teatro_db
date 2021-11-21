#ifndef TEATRO_H
#define TEATRO_H

#include<iostream>
#include<string.h>

using namespace std;

#define NOMBRE_SIZE 200

class Teatro {
	public:
		int id;
		char nombre[NOMBRE_SIZE];
	
	public:
		Teatro();
		Teatro(int id, char *nombre);
		void print();
};

#endif //TEATRO_H

