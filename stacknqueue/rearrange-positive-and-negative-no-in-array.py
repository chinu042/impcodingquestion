def rearrange_positive_negative(array):
    left = 0
    right = len(array) - 1

    while left <= right:
        # Find the next positive number from the left
        while left <= right and array[left] < 0:
            left += 1

        # Find the next negative number from the right
        while left <= right and array[right] >= 0:
            right -= 1

        # Swap the positive number at left and negative number at right
        if left < right:
            array[left], array[right] = array[right], array[left]
            left += 1
            right -= 1

# Main function
if __name__ == "__main__":
    size = int(input("Enter the size of the array: "))
    array = []

    print("Enter the elements of the array:")
    for i in range(size):
        element = int(input(f"Enter the element {i + 1}: "))
        array.append(element)

    # Function call to rearrange positive and negative numbers
    rearrange_positive_negative(array)

    # Print the updated array
    print("Updated Array:", array)
