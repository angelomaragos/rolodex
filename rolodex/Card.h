#ifndef Card_H
#define Card_H
#include <string>
using namespace std;
class Card {

	public:
		Card();
		~Card();
		string get_fName();
		void set_fName(string firstName);
		string get_lName();
		void set_lName(string lastName);
		string getAddress();
		void setAddress(string address);
		string getPhone();
		void setPhone(string phone);
		string goccupation();
		void soccupation(string occupation);
		void show();


		private:
		string fName;
		string lName;
		string address;
		string phone;
		string occupation;
};
#endif