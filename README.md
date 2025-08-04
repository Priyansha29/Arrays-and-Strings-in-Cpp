# Arrays and strings in-Cpp
Aim: To study and implement C++ Arrays and Strings.

Tools Used: VS Code or Programiz online cpp compiler.

# Theory
## Arrays in CPP
An array in C++ is a collection of elements of the same data type stored in consecutive memory locations. Elements are accessed using an index starting from 0, allowing fast access. The size of an array is fixed at the time of creation, making it less flexible.  Arrays are commonly used to store and process multiple values efficiently.

```
data_type array_name[size];
```

## Strings in CPP
A string in C++ is a sequence of characters used to store text. It can be created as a character array or using "string" data-type directly. Strings are more flexible because it allows easy operations like adding, conactenating, comparing, and finding length. Unlike arrays, strings can change size dynamically. Strings are commonly used for storing and processing text in programs.

```
string string_name=" ";
    //or
string string_name;
```

# Program 1: Declaring and Input-Output of Arrays

An array is declared and input is taken from user for that array in form of marks of specified number of subjects. Once the entered marks values are stored, array is displayed.

Algorithm:

1. Start and declare an array to store marks and a variable for the number of subjects.
2. Input the number of subjects from the user.
3. Loop from 0 to (number of subjects - 1) and take marks input for each subject, storing it in the array.
4. Display all the stored marks by looping through the array.
5. End the program

# Program-2: Searching in Array

User can search for specific value of marks that is stored in the array. 

Algorithm:

1. Start the program and input the size of the array (n).
2. Declare an array marks[n] to store the marks of subjects.
3. Take input of n marks from the user and store them in the array.
4. Display all the entered marks.
5. Input the mark to be searched from the user.
6. Search the array for the entered mark:
7. If found, display its position and stop.
8. If not found, display “Marks not found.”
9. End the program.

# Program-3: Reversing the Array

Inputted array is reversed by using for loop. Reversed array is printed. 

Algorithm: 

1. Declare and initialize the string.
2. Loop through the string from the last character to the first.
3. Append each character to a new string.
4. Print the reversed string.

# Program-4: Sum & Average of Marks

As the input for marks is taken from user, sum and average is calculated by a for loop iterating throughout the array.

Algorithm:

1. Initialize the array with numbers.
2. Initialize a sum variable to 0.
3. Loop through each element and add it to sum.
4. Calculate the average as sum divided by the number of elements.
5. Print the sum and average.

# Program-5: Minimum and Maximum of Marks

Minimum and Maximum of the entered marks is obtained as an output by sorting the array.

Algorithm:

1. Start the program and input the size of the array n.
2. Declare an array marks[n] and take n marks as input from the user.
3. Display all entered marks.
4. Sort the array in descending order using nested loops.
5. Print the first element as the maximum mark and the last element as the minimum mark.
6. End the program.

# Program-6: Taking Input & Output for Strings

We take input from user by declaring a string.

Algorithm:

1. Declare a string variable.
2. Initialize it with some text.
3. Print the string value.

# Program-7: Concatenating Strings

Two strings are taken as input from user and using "+" strings are concatenated.

Algorithm:

1. Declare and initialize two string variables.
2. Use concatenation operator or function to join them.
3. Print the concatenated string.

# Program-8: Reversing the String

Input string is reversed by using for loop and storing the reversed elements in a new string.

Algorithm:

1. Declare and initialize the string.
2. Loop through the string from the last character to the first.
3. Append each character to a new string.
4. Print the reversed string.

# Program-9: Verifying whether a string is Palindrome or not

The input string is reversed and then compared with the original string.

Algorithm:

1. Start the program and take a string input from the user.
2. Display the entered string.
3. Reverse the string by iterating from the last character to the first and store it in another string.
4. Display the reversed string.
5. Check if the original string and reversed string are the same by comparing characters.
6. Print whether the string is a palindrome or not and end the program.


