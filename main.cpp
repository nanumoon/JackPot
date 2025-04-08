#include<iostream>

using namespace std;

int main()
{	
	//Intialize()
	int* DynamicArray = new int[10];

	for (int Index = 0; Index < 10; ++Index)
	{
		DynamicArray[Index] = (Index + 1) * 3;
	}
	
	//Change()
	int* NewDynamicArray = new int[20];
	
	for (int Plus = 0; Plus < 10; ++Plus)
	{
		NewDynamicArray[Plus] = DynamicArray[Plus];
	}

	delete[] DynamicArray;
	DynamicArray = nullptr;

	//Print()
	for (int Count = 10; Count < 20; ++Count)
	{
		NewDynamicArray[Count] = (Count - 9) * 4;
	}
	
	for (int Number = 0; Number < 20; ++Number)
	{
		cout << NewDynamicArray[Number] << endl;
	}

	return 0;
}

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