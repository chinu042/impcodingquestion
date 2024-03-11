class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def reverse_linked_list(head):
    prev_node = None
    current_node = head
    while current_node:
        next_node = current_node.next
        current_node.next = prev_node
        prev_node = current_node
        current_node = next_node
    return prev_node

def print_linked_list(head):
    current_node = head
    while current_node:
        print(current_node.data, end=" ")
        current_node = current_node.next
    print()

# Function to create linked list from user input
def create_linked_list_from_input():
    nums = input("Enter space-separated numbers for linked list: ").split()
    head = None
    for num in nums:
        if not head:
            head = Node(int(num))
            tail = head
        else:
            tail.next = Node(int(num))
            tail = tail.next
    return head

if __name__ == "__main__":
    head = create_linked_list_from_input()

    print("Original linked list:")
    print_linked_list(head)

    head = reverse_linked_list(head)

    print("Reversed linked list:")
    print_linked_list(head)
