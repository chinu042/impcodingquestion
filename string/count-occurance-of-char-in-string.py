def count_occurrence_of_char_in_string(string, char):
    count = 0
    for i in range(0, len(string)):
        if string[i] == char:
            count += 1
    return count

if __name__ == "__main__":
    string = input("Enter the string: ")
    char = input("Enter the character to search: ")
    char_count = count_occurrence_of_char_in_string(string, char)
    print("The count of '%s' character in the string is: %s" % (char, char_count))
