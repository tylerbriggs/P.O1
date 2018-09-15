/**
*  Course: CMPS 2143 - OOP
*
*  Purpose: to create a vector and test in in several ways
*
*  @author Tyler Briggs
*  @version 1.1 09/13/2018
*/

#include <iostream>
#include"stdafx.h"
#include "myVector.h"
#include <vector>
/**
*  insert specific numbers into vector
*
*  @param {int} vector Orig
*  @return none
*/
void InsertValues(vector<myVector>& Orig);
/**
*  pushes 10000 items to vector
*
*  @param vector orig
*  @return none
*/
void PushValuesTest(vector<myVector>& Orig);
/**
*  pops 9998 items to vector
*
*  @param vector orig
*  @return none
*/
void ShrinkValues(vector<myVector>& Orig);
/**
*  tests to see if vector needs to grow or shrink
*
*  @param vector orig
*  @return none
*/
void TestVecSize(vector<myVector>& Orig);
/**
*  prints vector
*
*  @param vector orig
*  @return none
*/
void Print(vector<myVector>& Orig);

using namespace std;
int main() {
	myVector v;

	vector<myVector> Orig;

	Orig.resize(10);
	InsertValues(Orig);
	PushValuesTest(Orig);
	Print(Orig);
}
void InsertValues(vector<myVector>& Orig)
{
	// insert three values test
	for (int i = 0; i < 3; i++) {
		if (i = 0)
		{
			TestVecSize(Orig);
			Orig.push_back(13);
		}
		else if (i = 1)
		{
			TestVecSize(Orig);
			Orig.push_back(31);
		}
		else if (i = 2)
		{
			TestVecSize(Orig);
			Orig.push_back(73);
		}
	}

}

void PushValuesTest(vector<myVector>& Orig)
{
	// push 10000 items
	for (int i = 0; i<10000; i++)
	{
		myVector NewVector(i);
		TestVecSize(Orig);
		Orig.push_back(NewVector);
	}
	cout << "size: " << Orig.size();
}

void ShrinkValues(vector<myVector>& Orig)
{
	// pop 9998 items
	for (int i = 0; i < 9998; i++)
	{

		TestVecSize(Orig);
		Orig.pop_back();
	}
	cout << "size: " << Orig.size();
}

void TestVecSize(vector<myVector>& Orig)
{
	//test to see if vector is full
	if (Orig.size() == Orig.capacity())
		Orig.reserve(1.5 * Orig.capacity());
	//Test to see if vector is .4 full
	else if (Orig.size() == Orig.capacity()*.4)
		Orig.reserve(.5 * Orig.capacity());
	else;

}

void Print(vector<myVector>& Orig)
{
	for (int i = 0; i < Orig.size(); i++)
	{
		myVector V;
		V.print(Orig.at(i));

	}
