#ifndef SEQUENCE_H
#define	SEQUENCE_H

struct Node {
	char color;
	Node* next;		//for Sequence
	Node* left;		//for Tree
	Node* right;	//for Tree
};

class Sequence
{
public:
	Sequence();

	bool isEmpty();
	void print();
	Node* getHead();
	int length();

	void insertAtEnd(char c);
	void insertAtStart(char c);
	void clear();

	~Sequence();

private:
	Node* head;
};

#endif