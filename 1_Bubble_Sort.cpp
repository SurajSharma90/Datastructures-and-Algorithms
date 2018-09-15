//#include<iostream>
//
////BUBBLE SORT
////COMPLERXITY: O(n^2)
////SPEED: LOW
////PROS: QUICK TO WRITE. GOOD FOR SMALL ARRAYS AND QUICK CODING.
////CONS: SLOW, VERY BASIC AND NOT GOOD AT ALL FOR BIGGER ARRAYS AND PERFORMANCE.
//
//int nrOfComparisons = 0;
//
//template<typename T>
//void swap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//};
//
//template<typename T>
//void bubble_sort(T arr[], unsigned nrOfElements)
//{
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		for (size_t j = i; j < nrOfElements; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				swap(arr[i], arr[j]);
//				nrOfComparisons++;
//
//				for (size_t j = 0; j < nrOfElements; j++)
//				{
//					std::cout << arr[j] << " ";
//				}
//				std::cout << "\n";
//			}
//		}
//	}
//
//	//bool sorted = true;
//
//	//do //PASSES
//	//{
//	//	sorted = true;
//	//	for (size_t i = 0; i < nrOfElements - 1; i++) //ONE SORTING PASS
//	//	{
//	//		if (arr[i] > arr[i + 1])
//	//		{
//	//			swap(arr[i], arr[i + 1]);
//	//			sorted = false;
//	//			nrOfComparisons++;
//
//	//			for (size_t j = 0; j < nrOfElements; j++)
//	//			{
//	//				std::cout << arr[j] << " ";
//	//			}
//	//			std::cout << "\n";
//	//		}
//	//	}
//
//	//	nrOfElements--;
//
//	//} while (!sorted);
//};
//
//int main()
//{
//	const unsigned nrOfElements = 20;
//	int arr[nrOfElements] = { 20, 10, 30, 2, 6, 50, 3, 4, 5, 2, 21, 10, 30, 2, 6, 50, 22, 4, 5, 7 };
//
//	std::cout << "UNSORTED: " << "\n";
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		std::cout << arr[i] << "\n";
//	}
//
//	std::cout << "\n" << "SORTED: " << "\n";
//
//	bubble_sort(arr, nrOfElements);
//
//	for (size_t i = 0; i < nrOfElements; i++)
//	{
//		std::cout << arr[i] << "\n";
//	}
//	
//	std::cout << "Comparisons: " << nrOfComparisons << "\n";
//
//	system("PAUSE");
//
//	return 0;
//}