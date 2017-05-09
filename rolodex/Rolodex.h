#ifndef Rolodex_H
#define Rolodex_H
#include <vector>
#include "Card.h"
using namespace std;
class Rolodex {		
	
	public:				
		Rolodex();
		~Rolodex();
		Card getCurrentCard();
		void show();
		void flip();
		void search(string value);
		void add(Card card);
		void remove();
		

		private:
		vector<Card>::iterator curPosition;
		vector<Card>::iterator index;
		vector<Card> rolodex;
		int curPos;

};
#endif