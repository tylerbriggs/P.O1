#include <iostream>
#include"stdafx.h"
#include "myVector.h"
#include <vector>

using namespace std;
/**
*  Encode make vector
*
*  @param none
*  @return none
*/

myVector::myVector(int size) {
	vsize = size;
	theVector = new int[vsize];
	//just so we have stuff to print!!!!!
	for (int i = 0; i<vsize; i++) {
		theVector[i] = i * 2;
	}
}
/**
*  returns size of array
*
*  @param {int} size of array
*  @return {int} size of array
*/

int myVector::GetValue(int vsize)
{
	return vsize;
}
/**
*  resets value of size
*
*  @param {int} new size of array
*  @return {int} size of array
*/
void myVector::SetValue(int nsize)
{
	nsize = vsize;
}
Void print(int vsize)
{
	cout << theVector(vsize) << ”  “;

