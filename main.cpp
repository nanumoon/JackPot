#include <iostream>
#include <windows.h>
#include <conio.h>

#define UP	72
#define DOWN	80
#define RIGHT	77
#define LEFT	75

using namespace std;

void GotoXY(int X, int Y)
{
	COORD Cur;
	Cur.X = X;
	Cur.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

struct PlayerInfo {
	int X;
	int Y;
	string Shape;
};

int main()
{
	PlayerInfo* PlayerData;
	PlayerData = new PlayerInfo;

	PlayerData->X = 5;
	PlayerData->Y = 5;
	PlayerData->Shape = "P";

	bool IsRunning = true;
	while (IsRunning)
	{
		//if (_kbhit())
		int Input = _getch();

		if (Input == UP || toupper(Input) == 'W')
		{
			PlayerData->Y--;
		}
		else if (Input == RIGHT || toupper(Input) == 'D')
		{
			PlayerData->X++;
		}
		else if (Input == LEFT || toupper(Input) == 'A')
		{
			PlayerData->X--;
		}
		else if (Input == DOWN || toupper(Input) == 'S')
		{
			PlayerData->Y++;
		}
		else if (Input == 27)
		{
			IsRunning = false;
		}
	}

	system("cls");
	GotoXY(PlayerData->X, PlayerData->Y);
	cout << PlayerData->Shape << endl;

	delete PlayerData;
	PlayerData = nullptr;

	return 0;
}

//#include<iostream>
//
//using namespace std;
//
//void Resize(int* Original, int Newsize)
//{
//
//}
//
//int main()
//{	
//	//Intialize()
//	int* DynamicArray = new int[10];
//
//	for (int Index = 0; Index < 10; ++Index)
//	{
//		DynamicArray[Index] = (Index + 1) * 3;
//	}
//	
//	//Resize()
//	int* NewDynamicArray = new int[20];
//	
//	for (int Plus = 0; Plus < 10; ++Plus)
//	{
//		NewDynamicArray[Plus] = DynamicArray[Plus];
//	}
//
//	delete[] DynamicArray;
//	DynamicArray = nullptr;
//	
//	NewDynamicArray = DynamicArray;
//	NewDynamicArray = nullptr;
//
//	//Print()
//	for (int Count = 10; Count < 20; ++Count)
//	{
//		NewDynamicArray[Count] = (Count - 9) * 4;
//	}
//	
//	for (int Number = 0; Number < 20; ++Number)
//	{
//		cout << NewDynamicArray[Number] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void Initialize();
//void Print();
//void Shuffle();
//
//int Pockets[45] = { 0, };
//
//void B()
//{
//	memset(Pockets, 0, sizeof(Pockets));
//}
//
//
//void Swap(int* PA, int* PB)
//{
//	int Temp = *PA;
//	*PA = *PB;
//	*PB = Temp;
//}
//
//void Swap2(int* PA, int* PB)
//{
//	int* Temp = PA;
//	PA = PB;
//	PB = Temp;
//}
//
//
//int* Resize(int* Original, int OriginalSize, int NewSize)
//{
//	int* NewDynamicArray = new int[NewSize];
//	for (int i = 0; i < OriginalSize; ++i)
//	{
//		NewDynamicArray[i] = Original[i];
//	}
//
//	delete[] Original;
//	Original = nullptr;
//
//	Original = NewDynamicArray;
//	NewDynamicArray = nullptr;
//
//	return Original;
//}
//
//
//
//int main()
//{
//	int A;
//	inrt
//
//		int* DynamicArray = new int[10000];
//
//	for (int i = 0; i < 10; ++i)
//	{
//		DynamicArray[i] = (i + 1) * 3;
//	}
//
//	//추가 삭제 비용 적게 드는거
//	//접근 빠르다. 접근에 상수 시간(vector)
//	DynamicArray = Resize(DynamicArray, 10000, 10001);
//
//	for (int i = 10; i < 20; ++i)
//	{
//		DynamicArray[i] = (i - 9) * 4;
//	}
//
//
//	for (int i = 0; i < 20; ++i)
//	{
//		cout << DynamicArray[i] << endl;
//	}
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//void Initialize()
//{
//	srand(time(NULL));
//
//	for (int i = 0; i < 45; ++i)
//	{
//		Pockets[i] = i + 1;
//	}
//}
//
//
//
//void Shuffle()
//{
//	for (int i = 0; i < 45 * 1000; ++i)
//	{
//		int First = rand() % 45;
//		int Second = rand() % 45;
//
//		int Temp = Pockets[First];
//		Pockets[First] = Pockets[Second];
//		Pockets[Second] = Temp;
//	}
//
//}
//
//
//void Print()
//{
//	for (int i = 0; i < 6; ++i)
//	{
//		cout << Pockets[i] << endl;
//	}
//}

//Deta -> Contaniner
//dangling pointer(댕글링 포인터)	 = 유효한 개체를 가리키지 않는 포인터
//if(PA == nullptr) == if(PA)
//new, delete

//#include<iostream>
//#include<algorithm>
//
//#define LOTTO_COUNT	45
//using namespace std;
//
//int JackPot[LOTTO_COUNT] = { 0, };
//
//void Initialize()
//{
//	srand((unsigned int)time(NULL));
//
//	for (int Index = 0; Index < LOTTO_COUNT; ++Index)
//	{
//		JackPot[Index] = Index + 1;
//	}
//}
//
//void Shuffle()
//{
//	int Swap = 0;
//	for (int Count = 0; Count < LOTTO_COUNT * 1000; ++Count)
//	{
//		int First = rand() % LOTTO_COUNT;
//		int Second = rand() % LOTTO_COUNT;
//		Swap = JackPot[First];
//		JackPot[First] = JackPot[Second];
//		JackPot[Second] = Swap;
//	}
//	sort(JackPot, JackPot + 6);
//	for (int Array = 0; Array < 6; ++Array)
//	{
//		JackPot[Array];
//	}
//}
//
//void Print()
//{
//	for (int Pick = 0; Pick < 6; ++Pick)
//	{
//		cout << JackPot[Pick] << " ";
//	}
//}
//
//int main()
//{
//	Initialize();
//	Shuffle();
//	Print();
//
//	return 0;
//}
//
//sizeof