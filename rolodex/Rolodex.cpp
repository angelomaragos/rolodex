#include "stdafx.h"
#include "Rolodex.h"
#include "Card.h"
#include <vector>
#include <iostream>
using namespace std;

Rolodex::Rolodex()
{
//	this->curPosition = this->rolodex.begin();
	//this->curPos=this->rolodex.size();
}

Rolodex::~Rolodex()
{
	//this->curPosition = this->rolodex.begin();
	//this->rolodex.~vector();
}
Card Rolodex::getCurrentCard()
{
	this->curPosition = this->rolodex.begin();
	for(int i=0; i<this->curPos; i++)
		this->curPosition++;
	return *this->curPosition;
}

void Rolodex::show()
{
	/*
	 index is like a Card *
	 Card *index= this->rolodex.begin(); this begin will returnn the first pointer in the vector

	 C1 ---> C2 ---> C3 ---> C4 --->C5
	 ^
	 |
	 index

	 index++

	 *index will give that Card object.

	*/
	for(index = this->rolodex.begin(); index != this->rolodex.end(); index++)
		/*(*index).show();*/ index->show();
}	

void Rolodex::flip()
{
	this->curPosition++;
	this->curPos++;
	if(this->curPos >= this->rolodex.size())
	{
		this->curPosition = this->rolodex.begin();
		this->curPos = 0;
	}
}

void Rolodex::search(string value)
{
	int count = 0;
	for(index = this->rolodex.begin(); index!= this->rolodex.end(); index++)
	{
		if((*index).get_lName() == value)
		{
			(*index).show();
			this->curPosition = index;
			this->curPos = count;
			this->getCurrentCard().show();
			return;
		}
		count++;
	}
	count = 0;
	for(index = this->rolodex.begin(); index!= this->rolodex.end(); index++)
	{
		if((*index).get_lName().substr(0, value.length()) == value)
		{
			(*index).show();
			this->curPosition = index;
			this->curPos = count;
			return;
		}
		count++;
	}
	cout << "There is no card matched with the specified name" << endl << endl;
}

void Rolodex::add(Card card)
{	
	int count = 0;
	if(this->rolodex.size() == 1)
		this->curPosition = this->rolodex.begin();
	for(this->index = this->rolodex.begin(); this->index!= this->rolodex.end(); this->index++)
	{
		if((*this->index).get_lName() >= card.get_lName())
		{
			if((*this->index).get_lName() == card.get_lName())
			{
				if((*this->index).get_fName() >= card.get_fName())
				{
					this->curPosition = this->index;
					this->curPos = count;
					break;
				}
			}
			this->curPosition = this->index;
			this->curPos = count;
			break;
		}
		count++;
	}
	if(count == this->rolodex.size() && this->rolodex.size() != 0)
	{
		this->rolodex.push_back(card);
		this->curPosition = this->rolodex.end();
		this->curPos = this->rolodex.size();
	}
	else this->rolodex.insert(this->curPosition, card);
}

void Rolodex::remove()
{
	this->curPosition = this->rolodex.begin();
	for(int i=0; i<this->curPos; i++)
		this->curPosition++;
	this->rolodex.erase(this->curPosition);
	if(this->curPos >= this->rolodex.size())// this->curPosition > this->rolodex.end())
	{
		this->curPosition = this->rolodex.begin();
		this->curPos = 0;
	}
}
