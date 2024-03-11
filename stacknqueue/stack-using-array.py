class Stack:
    def __init__(self, capacity):
        self.capacity = capacity
        self.stack = []

    def is_empty(self):
        return len(self.stack) == 0

    def is_full(self):
        return len(self.stack) == self.capacity

    def push(self, item):
        if self.is_full():
            print("Stack Overflow: Cannot push item, stack is full.")
        else:
            self.stack.append(item)
            print(f"Pushed {item} to the stack.")

    def pop(self):
        if self.is_empty():
            print("Stack Underflow: Cannot pop item, stack is empty.")
            return None
        else:
            return self.stack.pop()

    def peek(self):
        if self.is_empty():
            print("Stack is empty.")
            return None
        else:
            return self.stack[-1]

    def size(self):
        return len(self.stack)

    def display(self):
        if self.is_empty():
            print("Stack is empty.")
        else:
            print("Stack contents:", end=" ")
            for item in reversed(self.stack):
                print(item, end=" ")
            print()

# Function to take input from user and perform stack operations
def perform_stack_operations():
    capacity = int(input("Enter the capacity of the stack: "))
    stack = Stack(capacity)

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Peek")
        print("4. Check if stack is empty")
        print("5. Check if stack is full")
        print("6. Get size of stack")
        print("7. Display stack")
        print("8. Exit")

        choice = input("Enter your choice: ")

        if choice == '1':
            item = input("Enter the item to push: ")
            stack.push(item)
        elif choice == '2':
            popped_item = stack.pop()
            if popped_item is not None:
                print("Popped", popped_item)
        elif choice == '3':
            top_item = stack.peek()
            if top_item is not None:
                print("Top element of the stack:", top_item)
        elif choice == '4':
            print("Is stack empty?", stack.is_empty())
        elif choice == '5':
            print("Is stack full?", stack.is_full())
        elif choice == '6':
            print("Size of the stack:", stack.size())
        elif choice == '7':
            stack.display()
        elif choice == '8':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please choose a valid option.")

# Example usage
if __name__ == "__main__":
    perform_stack_operations()
