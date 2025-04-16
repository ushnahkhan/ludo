#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(0));
	int player1 = -1, player2 = -1, player3 = -1, player4 = -1, dice = 0, sum = 0;
	while (player1 == -1)
	{
		dice = rand();
		dice = dice % 6 + 1;
		if (dice == 6)
			player1 = 0;
	}
	while (player2 == -1)
	{
		dice = rand();
		dice = dice % 6 + 1;
		if (dice == 6)
			player2 = 0;
	}
	while (player3 == -1)
	{
		dice = rand();
		dice = dice % 6 + 1;
		if (dice == 6)
			player3 = 0;
	}
	while (player4 == -1)
	{
		dice = rand();
		dice = (dice % 6) + 1;
		if (dice == 6)
			player4 = 0;
	}
	while (player1 != 56 && player2 != 56 && player3 != 56 && player4 != 56)
	{
		dice = rand();
		dice = (dice % 6) + 1;
		if (dice != 6)
		{
			if (player1 + dice <= 56)
				player1 = player1 + dice;
		}
		else
		{
			sum = dice;
			for (int i = 1; i <= 2 && dice == 6; i++)
			{
				dice = rand();
				dice = (dice % 6) + 1;
				sum = sum + dice;
				if (player1 + sum <= 56)
					player1 = player1 + sum;
			}
			if (sum == 18)
				player1 = player1 - sum;
		}

		dice = rand();
		dice = (dice % 6) + 1;
		if (dice != 6)
		{
			if (player2 + dice <= 56)
				player2 = player2 + dice;
		}
		else
		{
			sum = dice;
			for (int i = 1; i <= 2 && dice == 6; i++)
			{
				dice = rand();
				dice = (dice % 6) + 1;
				sum = sum + dice;
				if (player2 + sum <= 56)
					player2 = player2 + sum;
			}
			if (sum == 18)
				player2 = player2 - sum;
		}
		dice = rand();
		dice = (dice % 6) + 1;
		if (dice != 6)
		{
			if (player3 + dice <= 56)
				player3 = player3 + dice;
		}
		else
		{
			sum = dice;
			for (int i = 1; i <= 2 && dice == 6; i++)
			{
				dice = rand();
				dice = (dice % 6) + 1;
				sum = sum + dice;
				if (player3 + sum <= 56)
					player3 = player3 + sum;
			}
			if (sum == 18)
				player3 = player3 - sum;
		}
		dice = rand();
		dice = (dice % 6) + 1;
		if (dice != 6)
		{
			if (player4 + dice <= 56)
				player4 = player4 + dice;
		}
		else
		{
			sum = dice;
			for (int i = 1; i <= 2 && dice == 6; i++)
			{
				dice = rand();
				dice = (dice % 6) + 1;
				sum = sum + dice;
				if (player4 + sum <= 56)
					player4 = player4 + sum;
			}
			if (sum == 18)
				player4 = player4 - sum;
		}
	}
	if (player1 == 56)
		cout << "player 1 is the winner";
	else if (player2 == 56)
		cout << "player 2 is the winner";
	else if (player3 == 56)
		cout << "player 3 is the winner";
	else if (player4 == 56)
		cout << "player 4 is the winner";

	system("pause");
	return 0;

}