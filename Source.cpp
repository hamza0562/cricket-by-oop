#include<iostream>
#include<string.h>
using namespace std;
class cricket	
{
public:
	string p_name;
	int score;
	string t_name;

	cricket()
	{
		score = 0;
		t_name = " ";
		p_name = " ";
	}
	void input()
	{
		cout << "Enter the name of Team" << endl;
		cin.ignore();
		cin >> t_name;
		cout << "Enter the name of Player" << endl;
		cin.ignore();
		cin >> p_name;
		cout << "Enter the score of " << p_name << endl;
		cin >> score;

	}
	void change()
	{
		cout << "Change the name of Team" << endl;
		cin >> t_name;
		cout << "Change the name of Player" << endl;
		cin >> p_name;
		cout << "Change the score of " << p_name << endl;
		cin >> score;


	}

	void display()
	{
		cout << "Name of player is " << p_name << endl;
		cout << "Score of player is " << score << endl;
		cout << "Name of team is " << t_name << endl;

	}
};
	int main()
	{
		cricket o;
		o.input();
		o.display();
		o.change();
		o.display();
		system("pause");
		return 0;
	}
