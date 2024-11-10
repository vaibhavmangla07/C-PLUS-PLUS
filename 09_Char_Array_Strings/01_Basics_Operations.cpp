// Basics Operation 

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. strcpy: Copies one string to another.
    char c1[50];
    char c2[] = "Hello, World!";
    strcpy(c1, c2);
    cout << "Strcpy : " << c1 << endl;

    // 2. strcat: Concatenates two strings
    char c3[50] = "Hello, ";
    char c4[] = "World!";
    strcat(c3, c4);
    cout << "Strcat : " << c3 << endl;

    // 3. strlen: Returns the length of a string.
    char str[] = "Hello, World!";
    size_t len = strlen(str);
    cout << "Strlen : " << len << endl;

    // 4. strcmp: Compares two strings.
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
    cout << "Strcmp : " << result << endl;

    // 5. strchr: Finds the first occurrence of a character in a string.
    char str3[] = "Hello, World!";
    char *ptr1 = strchr(str3, 'W'); // Renamed to ptr1 to avoid redefinition
    cout << "Strchr : " << ptr1 << endl;

    // 6. strstr: Finds the first occurrence of a substring in a string.
    char str4[] = "Hello, World!";
    char *ptr2 = strstr(str4, "World"); 
    cout << "Strstr : " << ptr2 << endl;

    return 0;
}
