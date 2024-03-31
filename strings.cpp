// String manipulation - lenghthy 
  #include <iostream>
#include <cstring> // For strlen

using namespace std;

// Function to show address of each character in string
void showAddress(const char* str) {
    cout << "Addresses of characters in the string:\n";
    while (*str != '\0') {
        cout << *str << ": " << static_cast<const void*>(str) << endl;
        str++;
    }
}

// Function to concatenate two strings
void concatenateStrings(char* str1, const char* str2) {
    while (*str1 != '\0') {
        str1++;
    }
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

// Function to compare two strings
int compareStrings(const char* str1, const char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

// Function to calculate length of the string using pointers
int stringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to convert all lowercase characters to uppercase
void toUpperCase(char* str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}

// Function to reverse the string
void reverseString(char* str) {
    char* end = str;
    while (*end != '\0') {
        end++;
    }
    end--; // Pointing to last character before null terminator
    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

// Function to insert a string in another string at a specified position
void insertString(char* str1, const char* str2, int pos) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    if (pos<0 || pos>len1) {
        cout << "Invalid position!" << endl;
        return;
    }
    // Move characters to the right to make space for insertion
    for (int i = len1; i >= pos; i--) {
        str1[i + len2] = str1[i];
    }
    // Copy characters of str2 into str1 at specified position
    for (int i = 0; i < len2; i++) {
        str1[pos + i] = str2[i];
    }
}

int main() {
    char str1[100], str2[100];
    char choice;

    do {
        cout << "\nMenu:\n";
        cout << "a. Show address of each character in string\n";
        cout << "b. Concatenate two strings\n";
        cout << "c. Compare two strings\n";
        cout << "d. Calculate length of the string (use pointers)\n";
        cout << "e. Convert all lowercase characters to uppercase\n";
        cout << "f. Reverse the string\n";
        cout << "g. Insert a string in another string at a user specified position\n";
        cout << "x. quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 'a':
                cout << "Enter a string: ";
                cin >> str1;
                showAddress(str1);
                break;
            case 'b':
                cout << "Enter first string: ";
                cin >> str1;
                cout << "Enter second string: ";
                cin >> str2;
                concatenateStrings(str1, str2);
                cout << "Concatenated string: " << str1 << endl;
                break;
            case 'c':
                cout << "Enter first string: ";
                cin >> str1;
                cout << "Enter second string: ";
                cin >> str2;
                if (compareStrings(str1, str2) == 0) {
                    cout << "Strings are equal\n";
                } else {
                    cout << "Strings are not equal\n";
                }
                break;
            case 'd':
                cout << "Enter a string: ";
                cin >> str1;
                cout << "Length of the string: " << stringLength(str1) << endl;
                break;
            case 'e':
                cout << "Enter a string: ";
                cin >> str1;
                toUpperCase(str1);
                cout << "String in uppercase: " << str1 << endl;
                break;
            case 'f':
                cout << "Enter a string: ";
                cin >> str1;
                reverseString(str1);
                cout << "Reversed string: " << str1 << endl;
                break;
            case 'g':
                cout << "Enter main string: ";
                cin >> str1;
                cout << "Enter string to insert: ";
                cin >> str2;
                int pos;
                cout << "Enter position to insert (0-based indexing): ";
                cin >> pos;
                insertString(str1, str2, pos);
                cout << "Resulting string after insertion: " << str1 << endl;
                break;
            case 'x':
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'x');

    return 0;
}
