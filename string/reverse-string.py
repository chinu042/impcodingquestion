def reverse_string(input_str):
    string = input(input_str)
    rev_str = string[::-1]
    return rev_str

if __name__ == "__main__":
    reversed_input = reverse_string("Enter a string to reverse: ")
    print("Reversed string:", reversed_input)
