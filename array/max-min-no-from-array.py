def find_max_min(arr):
    if not arr:  # Handling empty array case
        return None, None

    maximum = minimum = arr[0]

    for num in arr:
        if num > maximum:
            maximum = num
        elif num < minimum:
            minimum = num

    return maximum, minimum

# Taking input for array size
size = int(input("Enter the size of the array: "))

# Taking input for array elements
array = []
print("Enter the elements of the array:")
for i in range(size):
    array.append(int(input(f"Enter element {i+1}: ")))

# Finding maximum and minimum
max_num, min_num = find_max_min(array)
print(f"Maximum number: {max_num}")
print(f"Minimum number: {min_num}")
