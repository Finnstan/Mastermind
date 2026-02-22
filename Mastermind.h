#pragma once
#ifndef MASTERMIND_H
#define MASTERMIND_H

#include <iostream>
#include "Sequence.h"

using namespace std;
class Mastermind
{
public:
	void printColors();
	void makeSequence();
private:
	Sequence code;
};

#endif