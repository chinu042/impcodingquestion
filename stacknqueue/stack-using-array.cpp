#include <iostream>
using namespace std;

#define MAX_SIZE 100

struct Stack {
    int capacity;
    int stack[MAX_SIZE];
    int top;

    Stack(int capacity) {
        this->capacity = capacity;
        top = -1;
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top == capacity - 1;
    }

    void push(int item) {
        if (is_full()) {
            cout << "Stack Overflow: Cannot push item, stack is full." << endl;
        } else {
            top++;
            stack[top] = item;
            cout << "Pushed " << item << " to the stack." << endl;
        }
    }

    int pop() {
        if (is_empty()) {
            cout << "Stack Underflow: Cannot pop item, stack is empty." << endl;
            return -1;
        } else {
            int popped_item = stack[top];
            top--;
            return popped_item;
        }
    }

    int peek() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        } else {
            return stack[top];
        }
    }

    int size() {
        return top + 1;
    }

    void display() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack contents: ";
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << " ";
            }
            cout << endl;
        }
    }
};

// Function to perform stack operations
void perform_stack_operations() {
    int capacity;
    cout << "Enter the capacity of the stack: ";
    cin >> capacity;
    Stack stack(capacity);

    while (true) {
        cout << "\nChoose an operation:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Check if stack is empty" << endl;
        cout << "5. Check if stack is full" << endl;
        cout << "6. Get size of stack" << endl;
        cout << "7. Display stack" << endl;
        cout << "8. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int item;
                cout << "Enter the item to push: ";
                cin >> item;
                stack.push(item);
                break;
            }
            case 2: {
                int popped_item = stack.pop();
                if (popped_item != -1) {
                    cout << "Popped " << popped_item << endl;
                }
                break;
            }
            case 3: {
                int top_item = stack.peek();
                if (top_item != -1) {
                    cout << "Top element of the stack: " << top_item << endl;
                }
                break;
            }
            case 4:
                cout << "Is stack empty? " << (stack.is_empty() ? "Yes" : "No") << endl;
                break;
            case 5:
                cout << "Is stack full? " << (stack.is_full() ? "Yes" : "No") << endl;
                break;
            case 6:
                cout << "Size of the stack: " << stack.size() << endl;
                break;
            case 7:
                stack.display();
                break;
            case 8:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }
}

// Driver code
int main() {
    perform_stack_operations();
    return 0;
}
