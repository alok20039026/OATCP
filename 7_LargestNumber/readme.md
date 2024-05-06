# Algorithm -

- Input: The algorithm takes a vector of integers as input, representing numbers to form the largest number.

- Custom Comparator: It defines a custom comparator function that concatenates two strings and compares them to determine their order.

- Sorting: The algorithm sorts the input vector of strings using the custom comparator to arrange them in a way that forms the largest number when concatenated.

- Handling Leading Zeros: It checks if the first element after sorting is "0"; if so, it returns "0" as the largest number to account for leading zeros.

- Concatenation: If the first element is not "0", the algorithm concatenates the sorted strings to create the final largest number to be returned.