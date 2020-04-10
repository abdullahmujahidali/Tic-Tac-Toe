
#include<iostream>
using namespace std;
void Display(char a, char b, char c, char d, char e, char f, char g, char h, char i)
{
	system("cls");
	cout << "          WELCOME TO TIC TAC TOE          " << endl << endl << endl;
	cout << "Player 1 = X and Player 2 = O" << endl << endl;
	cout << "   " << 1 << " \t" << " " " " << " " << 2 << "\t " << " " << " " << 3 << endl;
	cout << "\t*\t*" << endl << "\t*\t*" << endl << "\t*\t*" << endl;
	cout << 1 << " """" " << a << " " << " "" "" " " " " " " " " " << b << " " << " "" "" "" "" " " " << c << endl;
	cout << "  **************************" << endl;
	cout << "\t*\t*" << endl;
	cout << "\t*\t*" << endl;
	cout << "\t*\t*" << endl;
	cout << 2 << " """" " << d << " " << " "" "" " " " " " " " " " << e << " " << " "" "" "" "" " " " << f << endl;
	cout << "  **************************" << endl;
	cout << "\t*\t*" << endl;
	cout << "\t*\t*" << endl;
	cout << "\t*\t*" << endl;
	cout << 3 << " "" """ << g << " " << " "" "" " " " " " " " " " << h << " " << " "" "" "" "" " " " << i << endl;
}
void main()
{
	char ch;
	do{
		char a = '.', b = '.', c = '.', d = '.', e = '.', f = '.', g = '.', h = '.', i = '.', sign, move;
		int player;
		for (int z = 0; z <= 8; z++)
		{
			Display(a, b, c, d, e, f, g, h, i);

			if (z % 2 == 0)
			{
				player = 1;
				sign = 'X';
			}
			else
			{
				player = 2;
				sign = 'O';
			}
		again:cout << "Player " << player << " Turn: ";
			cin >> move;
			if (move == 'a' && a == '.')
			{
				a = sign;
			}
			else if (move == 'b' && b == '.')
			{
				b = sign;
			}
			else if (move == 'c' && c == '.')
			{
				c = sign;
			}
			else if (move == 'd' && d == '.')
			{
				d = sign;
			}
			else if (move == 'e' && e == '.')
			{
				e = sign;
			}
			else if (move == 'f' && f == '.')
			{
				f = sign;
			}
			else if (move == 'g' && g == '.')
			{
				g = sign;
			}
			else if (move == 'h' && h == '.')
			{
				h = sign;
			}
			else if (move == 'i' && i == '.')
			{
				i = sign;
			}
			else
			{
				cout << "Invalid Move." << endl;
				goto again;
			}

			if (a == 'X' && b == 'X' && c == 'X' || a == 'X' && d == 'X' && g == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && f == 'X' && i == 'X' || c == 'X' && e == 'X' && g == 'X' || d == 'X' && e == 'X' && f == 'X' || g == 'X' && h == 'X' && i == 'X' || b == 'X' && e == 'X' && h == 'X')
			{
				Display(a, b, c, d, e, f, g, h, i);

				cout << "Player 1 Won. " << endl;
				cout << "Enter Y to Play again or else Press any key: ";
				cin >> ch;
				z = 10;
			}
			if (a == 'O' && b == 'O' && c == 'O' || a == 'O' && d == 'O' && g == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && f == 'O' && i == 'O' || c == 'O' && e == 'O' && g == 'O' || d == 'O' && e == 'O' && f == 'O' || g == 'O' && h == 'O' && i == 'O' || b == 'O' && e == 'O' && h == 'O')
			{
				Display(a, b, c, d, e, f, g, h, i);
				cout << "Player 2 Won. " << endl;
				cout << "Enter Y to Play again or else Press any key: ";
				cin >> ch;
				z = 10;
			}

			if (a != '.' && b != '.' && c != '.'
				&& d != '.' && e != '.' && f != '.'
				&& g != '.' && h != '.' && i != '.')
			{

				Display(a, b, c, d, e, f, g, h, i);
				cout << "Draw. " << endl;
				cout << "Enter Y to Play again or else Press any key: ";
				cin >> ch;
				z = 10;
			}
		}
	} while (ch == 'y');
	
}


