#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

// Function to reverse the linked list
void reverse(Node** head)
{
    Node* current = *head;
    Node* prev = NULL;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

// Utility function to create a new node
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}

// Function to create a linked list from user input
Node* createLinkedListFromInput()
{
    cout << "Enter the numbers for the linked list (enter -1 to stop):" << endl;
    Node* head = nullptr;
    Node* tail = nullptr;
    int num;
    while (true) {
        cin >> num;
        if (num == -1)
            break;
        if (!head) {
            head = newNode(num);
            tail = head;
        } else {
            tail->next = newNode(num);
            tail = tail->next;
        }
    }
    return head;
}

// Utility function to print a linked list
void printlist(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

// Driver code
int main()
{
	Node* head1 = createLinkedListFromInput();
	cout << "Given linked list\n";
	printlist(head1);
	reverse(&head1);
	cout << "Reversed linked list\n";
	printlist(head1);
	return 0;
}
