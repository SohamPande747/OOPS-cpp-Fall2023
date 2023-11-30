#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	vector <int> num;
	bool found;

	for (;;)
	{
		cout << "1. Insert an element\n";
	        cout << "2. Delete an element\n";
	        cout << "3. Search for an element\n";
	        cout << "4. Display elements\n";
	        cout << "5. Exit\n";
	        cout << "Enter your choice: ";
	        int choice;
	        cin >> choice;

		switch(choice)
		{
			case 1:
				int inElement;
				cout << "Enter element to insert: ";
				cin >> inElement;

				num.push_back(inElement);
				break;

			case 2:
				int deleteElement;
				cout << "Enter element to delete: ";
				cin >> deleteElement;

				for (int i = 0; i < num.size(); i++)
				{
					if (num[i] == deleteElement)
					{
						num.erase(num.begin() + i);

						cout << "Element deleted successfully..." << endl;
						break;
					}
				}

			case 3:
				int searchEl;
				cout << "Enter the element to search: ";
				cin >> searchEl;
				found = false;

				for (int i = 0; i < num.size(); i++)
				{
					if (num[i] == searchEl)
					{
						found = true;
						cout << searchEl << " found at index: " << i << endl;
						break;
					}
				}
				if (!found)
				{
					cout << "Element not found..." << endl;
				}
				break;

			case 4:
				int dispEl;

				for (int i = 0; i < num.size(); i++)
				{
					if (i == num.size())
					{
						break;
					}
					else
					{
						cout << "Element is: " << num[i] << endl;
						continue;
					}
				} 
			case 5:
				return 0;

			default:
				cout << "Enter a valid input.." << endl;
		}
	}
}	
