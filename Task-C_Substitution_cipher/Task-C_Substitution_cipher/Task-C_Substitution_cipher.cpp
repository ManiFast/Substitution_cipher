#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	// map of Eng
	map<int, char> alph;
	alph[0] = 'a';
	alph[1] = 'b';
	alph[2] = 'c';
	alph[3] = 'd';
	alph[4] = 'e';
	alph[5] = 'f';
	alph[6] = 'g';
	alph[7] = 'h';
	alph[8] = 'i';
	alph[9] = 'g';
	alph[10] = 'k';
	alph[11] = 'l';
	alph[12] = 'm';
	alph[13] = 'n';
	alph[14] = 'o';
	alph[15] = 'p';
	alph[16] = 'q';
	alph[17] = 'r';
	alph[18] = 's';
	alph[19] = 't';
	alph[20] = 'u';
	alph[21] = 'v';
	alph[22] = 'w';
	alph[23] = 'x';
	alph[24] = 'y';
	alph[25] = 'z';


	// Input text
	string input_text;
	string some_text;
	cin >> some_text;

  int some_num;
	cin >> some_num;

	cin >> input_text;


	// Output cipher text
	//cout << endl;
	//int mover = 27;
	//if (mover > 26) mover %= 26;	// overflow

	//cout << mover << endl << endl;

	//for (int i = 0; i < input_text.size(); i++)
	//{
	//	for (int k = 0; k < 26; k++)
	//	{
	//		if (input_text[i] == alph[k])
	//		{
	//			cout << alph[k + mover];		// move to n letter
	//		}
	//	}
	//}

	// Output num of cipher
	cout << endl;
	string input_text2;
	cin >> input_text2;

	int answ1 = 0, answ2 = 0;
	bool is_it_one = false;

	if (input_text[0] < input_text2[0])
	{
		answ1 = alph[input_text2[0] - input_text[0]];
		answ1 -= 97; // bec we count in chars and minus 97
	}
	else if(input_text[0] > input_text2[0])
	{
		answ1 = alph[input_text[0] - input_text2[0]];
		answ1 -= 97; // bec we count in chars and minus 97
		answ1 = (answ1 - 26) * -1; // its formula

		/*
		Formula:

		a -> z  25 | 25 - 26 = -1 * -1 = 1
		z -> a  1

		a -> y  24 | 24 - 26 = -2 * -1 = 2
		y -> a  2
		*/
	}

	if (answ1 < 25)
		cout << answ1 << endl;

	if (input_text.size() == 1)
	{
		is_it_one = true;
	}
	if (answ1 > 25)
		cout << "-1" << endl;





	cout << endl; system("pause"); return 0;
}