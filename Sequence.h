#pragma once
#ifndef SEQUENCE_H
#define	SEQUENCE_H

struct Node {
	char color;
	Node* next;
};

class Sequence
{
public:
	Sequence();

	bool isEmpty();
	void print();

	void insertAtEnd(char c);
	void insertAtStart(char c);
	void insertInBetween(char c, int place);
private:
	Node* head;
	Node* tail;
};

#endif