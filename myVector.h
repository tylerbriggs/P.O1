#pragma once
#include"stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class myVector {
private:

	int *theVector;
	int vsize;
public:
	myVector() {
		vsize = 10;
		theVector = new int[10];
	}
	myVector(int size) {
		vsize = size;
		theVector = new int[vsize];

	}


	int GetValue(int vsize);
	void SetValue(int nsize);
	Void print(int size);

}
