def check_anagram(string1, string2):
    string1 = string1.lower()
    string2 = string2.lower()
    return sorted(string1) == sorted(string2)

if __name__ == "__main__":
    string1 = input("Enter the first string: ")
    string2 = input("Enter the second string: ")
    print(check_anagram(string1, string2))
