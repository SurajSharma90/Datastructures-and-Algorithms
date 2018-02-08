#include<iostream>

//SELECTION SORT
//COMPLERXITY: O(n^2)
//SPEED: SLOW-MEDIUM
//PROS: QUICK TO WRITE, QUICKER THAN BUBBLE SORT, DOES NOT GO THROUGH THE WHOLE ARRAY FOR COMPARISIONS EVERY TIME, 
	//KEEPS TRACK OF MINIMUM INDEX AND SWAPS ONCE.
//CONS: STILL SLOW, WE WANT O(n)!!.

int nrOfComparisons = 0;

template<typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
};

template<typename T>
void slection_sort(T arr[], unsigned nrOfElements)
{
	int minIndex = 0;

	for (size_t i = 0; i < nrOfElements - 1; i++)
	{
		minIndex = i;

		for (size_t j = i + 1; j < nrOfElements; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}

		if (arr[minIndex] != arr[i])
		{
			swap(arr[minIndex], arr[i]);

			for (size_t k = 0; k < nrOfElements; k++)
			{
				std::cout << arr[k] << " ";
			}
			std::cout << "\n";
		}
	}
};

int main()
{
	const unsigned nrOfElements = 20;
	int arr[nrOfElements] = { 20, 10, 30, 2, 6, 50, 3, 4, 5, 2, 21, 10, 30, 2, 6, 50, 22, 4, 5, 7 };

	std::cout << "UNSORTED: " << "\n";

	for (size_t i = 0; i < nrOfElements; i++)
	{
		std::cout << arr[i] << "\n";
	}

	std::cout << "\n" << "SORTED: " << "\n";

	slection_sort(arr, nrOfElements);

	for (size_t i = 0; i < nrOfElements; i++)
	{
		std::cout << arr[i] << "\n";
	}

	std::cout << "Comparisons: " << nrOfComparisons << "\n";

	system("PAUSE");

	return 0;
}