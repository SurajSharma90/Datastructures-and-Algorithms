#include<iostream>
#include<time.h>

////INSERTION SORT
////COMPLERXITY: O(n^2)
////SPEED: MEDIUM
////PROS: KEEPS SORTED ARRAY AND IS GOOD FOR SMALLER TABLES. IT IS GENERALLY BETTER THAN OTHER O(n^2) ALGORITHMS.
////CONS: STILL SLOW FOR BIGGER TABLES, WE WANT O(n)!!.

int main()
{
	//Random
	srand(time(static_cast<unsigned>(0)));

	//Array
	const int arrSize = 10;
	int arr[arrSize];
	for (size_t i = 0; i < arrSize; i++)
	{
		arr[i] = rand() % arrSize;
	}

	//Test print
	for (size_t i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	//Timer
	int start = clock();

	//Insertion Sort
	int sortedIndex = 1;
	while (sortedIndex < arrSize)
	{
		//Find insertion index
		int insertionIndex = -1;
		for (size_t i = 0; i < sortedIndex && insertionIndex == -1; i++)
		{
			if (arr[sortedIndex] < arr[i])
			{
				insertionIndex = i;
			}
		}

		//Move everything in array if we found something
		if (insertionIndex >= 0)
		{
			int savedValue = arr[sortedIndex];

			//Move things
			for (size_t i = sortedIndex; i > insertionIndex; i--)
			{
				arr[i] = arr[i - 1];
			}

			//Insert value
			arr[insertionIndex] = savedValue;
		}

		//Increase size of sorted array and go to next iteration
		sortedIndex++;
	}

	//Timer
	int stop = clock();

	//Test print
	for (size_t i = 0; i < arrSize; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	//Exec time
	std::cout << "Time: " << (stop - start)  << " ms" << "\n";

	system("PAUSE");
	return 0;
}