# Chapter 3 - Strings, Vectors and Arrays
> These README files in each chapter contain non executable-neccesary and/or extra information.

## 3.3 | Explain how whitespace characters are handled in the string input operator and in the getline function.

- Input operator. Reads discarding whitespace characters, and once it starts reading, it reads until it encounters any whitespace character.
- getline(input, str) function reads lines. The '\n' determines when a new line starts.

## 3.9 | What does the following program do? Is it valid? If not, why not?
```c++
string s; // Default initialization to empty string
cout << s[0] << endl; // Grabbing first and only item in string. Null terminator
```
It's valid. Default initialization still has a single value, which is a null terminator. Value of 0.


## 3.11 | 
```c++
const string s = "Keep out!";
for (auto &c : s){ /* ... */ } // c is a char& (character reference)
```
