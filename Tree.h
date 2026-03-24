#pragma once
#include <iostream>
#include "Sequence.h"
using namespace std;

struct TreeNode {
	Sequence data;
	TreeNode* left;
	TreeNode* right;
};

class Tree
{
public:
	Tree();
	TreeNode* clone(TreeNode* curr);
	bool isEmpty();
	void insert(Sequence s);
	void printTree();
	void printTree(TreeNode* curr);
	string checkInTree();		//used to check where in a tree the sequence used might be
private:
	TreeNode* root;
};

