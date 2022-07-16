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

## 3.26 | In the binary search program on page 112, why did we write `mid = beg + (end - beg) / 2;` instead of `mid = (beg + end) / 2`?

Iterators don't have a valid '+' operator to work with. So the second expression is not valid.

## 3.27 | Assuming txt_size is a function that takes no arguments and returns an int value, which of the following definitions are illegal? Explain why.

```c++
unsigned buf_size = 1024;
int ia[buf_size]; // ILLEGAL. buf_size must be a constant expresion.
int ia[4*7-14]; // LEGAL. Properly using a constant expresion for indexing.
int ia[text_size()]; // ILLEGAL. text_size should return a constant expresion
char st[11] = "fundamental"; // ILLEGAL. No space for null termating character.
```

## 3.28 | What are the values in the following arrays?
```c++
string sa[10]; // {"", "", "", "", "", "", "", "", "", ""}
int ia[10]; // {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
int main(){
    string sa2[10]; // {"", "", "", "", "", "", "", "", "", ""}
    int ia2[10]; // {undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined, undefined} Garbage values
}
```

## 3.29 | List some of the drawbacks of using arrays

- Cannot resize
- Naive data structure
- Harder to work with than vectors

## 3.30 | Identify the indexing errors in the following code

```c++
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ix++)
    ia[ix] = ix; // When ix is 10, this will turn into a buffer overflow (Subscripting an out-of-index value)
```

## 3.33 | What would happen if we did not initialize the scores array in program on page 116?
All elements in the array wouldn't be default initialized, therefore all values wouldb be undefined (garbage value)

## 3.34 | Given that p1 and p2 point to elements in the same array, what does the following code do? Are there values of p1 or p2 that make this code illegal?

```c++
p1 += p2 - p1
```

No. Based on pointer arithmetic, this operation will always shift p1 to where p2 is. The right-hand operation is simply the difference between the two pointer (could be positive or negative) and it's simply adding that difference to the pointer on the left-hand side of the assignment.

## 3.37 | What does the following program do?

```c++
    const char ca[] = {'h', 'e', 'l', 'l', 'o'}; // Initializing 5 characters array
    const char *cp = ca; // Pointer to array (first element of array)
    while (*cp) { // Dereferencing pointer, body will execute until *cp is false (0)
        cout << *cp << endl; // Printing dereferenced value
        ++cp; // Passing to next pointer. It doesnt matter if it points to an element out of "ca"
    }
```

## 3.38 | In this section, we noted that it was not only illegal but meaningless to try to add two pointers. Why would adding two pointers be meaningless?

It doesn't make sense. We don't expect to get a useful value out of that kind of operation. If existed, this would return us an out-of-boundary pointer which would be totally useless.