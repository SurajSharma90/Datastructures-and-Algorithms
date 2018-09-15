//#include <iostream>
//
//template<typename T>
//class LinkedList
//{
//private:
//	class Node
//	{
//	public:
//		Node* next;
//		T data;
//
//		Node(T data, Node* next = nullptr)
//		{
//			this->data = data;
//			this->next = next;
//		}
//		~Node()
//		{
//			delete this->next;
//		}
//	};
//
//	Node* root;
//	int nrOfNodes;
//
//public:
//	LinkedList()
//	{
//		this->root = nullptr;
//		this->nrOfNodes = 0;
//	}
//	~LinkedList()
//	{
//		delete this->root;
//	}
//
//	void insertEnd(T data)
//	{
//		if (this->root == nullptr) //List is empty, create root
//		{
//			this->root = new Node(data);
//		}
//		else
//		{
//			Node* walker = this->root;
//
//			while (walker->next != nullptr)
//				walker = walker->next;
//
//			walker->next = new Node(data);
//		}
//
//		this->nrOfNodes++;
//	}
//
//	T getAt(int index)
//	{
//		if (this->root == nullptr)
//			throw("LIST IS EMPTY!");
//		else if (index < 0 || index >= this->nrOfNodes)
//			throw("INDEX OUT OF BOUNDS");
//
//		T data;
//
//		if (index == 0)
//			data = this->root->data;
//		else
//		{
//			Node* walker = this->root;
//
//			for (size_t i = 0; i < index; i++)
//			{
//				walker = walker->next;
//			}
//
//			data = walker->data;
//		}
//
//		return data;
//	}
//
//};
//
//using namespace std;
//
//int main()
//{
//	LinkedList<int> list1;
//
//	list1.insertEnd(1);
//	list1.insertEnd(2);
//	list1.insertEnd(3);
//
//	std::cout << list1.getAt(0) << "\n";
//	std::cout << list1.getAt(1) << "\n";
//	std::cout << list1.getAt(2) << "\n";
//
//	system("PAUSE");
//
//	return 0;
//}
//
//
//
