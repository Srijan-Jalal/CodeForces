#include <iostream>
using namespace std;

int main(void) 
{
	int n,m;
    bool turn = true;
	cin >> n >> m;
	char snake[n][m];

	for (int i = 0; i < n; i++) 
    {
		for (int j = 0; j < m; j++) 
        {
			if ((i+1) % 2 == 0) 
				snake[i][j] = '.';
			else
				snake[i][j] = '#';
		}
	}

	for (int i = 1; i < n; i += 2) 
    {
		if (turn) 
			snake[i][m-1] = '#';
		else
			snake[i][0] = '#';
		turn = !(turn);
	}

	for (int i = 0; i < n; i++) 
    {
		for (int j = 0; j < m; j++)
			cout << snake[i][j];
		cout << endl;
	}
	return 0;
}
