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

## 3.18 | Is the following program legal? If not, how might you fix it?

### Given program
```c++
vector<int> ivec;
ivec[0] = 42; // ILLEGAL. Subscripting a non existing item.
```

### Fix
```c++
vector<int> ivec;
ivec.push_back(42); // This member function does the trick. Now ivec[0] is 42;
```

## 3.19 | List 3 ways to define a vector and give it ten elements, each with the value 42. Indicate whether there is a preferred way to do so, and why.

```c++
vector<int> vec(10, 42); // Prefered. It's syntatically better
vector<int> vec = { 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
vector<int> vec{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
```
