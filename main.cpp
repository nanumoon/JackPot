#include<iostream>

#define LOTTO_COUNT	45
using namespace std;

int JackPot[LOTTO_COUNT] = { 0, };

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < LOTTO_COUNT; ++Index)
	{
		JackPot[Index] = Index + 1;
	}
}

void Shuffle()
{
	int Swap = 0;
	for (int Count = 0; Count < LOTTO_COUNT * 1000; ++Count)
	{
		int First = rand() % LOTTO_COUNT;
		int Second = rand() % LOTTO_COUNT;
		Swap = JackPot[First];
		JackPot[First] = JackPot[Second];
		JackPot[Second] = Swap;
	}
}

void Print()
{
	for (int Pick = 0; Pick < 6; ++Pick)
	{
		cout << JackPot[Pick] << " ";
	}
}

int main()
{
	Initialize();
	Shuffle();
	Print();

	return 0;
}