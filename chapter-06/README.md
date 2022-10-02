# Chapter 6 - Functions

## 6.1 | What is the difference between a parameter and an argument?

- A parameter is the declaration of a data a function will take as input.

- An argument is the data you pass into the function. In other words is the actual value.

## 6.2 | Explain which of the following functions are in error and explain why. Suggest how you might correct it.

> ### (a) 
```c++
int f(){
    string s;
    // ...
    return s;
}
```

return type is incorrect. Should return an int.

> ### (b)
```c++
f2(int i ) { /* ... */ }
```

It's got no return type. Every function needs it.

> ### (c)

```c++
int calc(int v1, int v1) /* ... */
```
Can't have two parametes with the same identifier.

> ### (d)
```c++
double square(double x) return x * x;
```
Correct

## 6.6 | Explain the difference between a parameter, a local variable, and a local static variable. Give an example of a function in which each might be useful.

- A parameter is a local variable, but it's declared as part of a function's input variables.
- A local variable is a variable where its lifetime ends when the scope where it was defined in ends.
- A static variable in contrast, its lifetime ends when the program terminates.

## 6.7 | Write a function that returns 0 when it is first called and then generates numbers in sequence each time it is called again.

```c++
int counter (){
    static int ctr = -1;
    return ++ctr;
}
```

## 6.8 | Write a header file named Chapter6.h that contains declarations for the functions you wrote for the exercises in 6.1
See `Chapter6.h`

## 6.9 | Write your own versions of the fact.cc and factMain.cc files. These files should include your Chapter6.h from the exercises in the previous section. Use these files to understand how your compiler supports separate compilation.
See `fact.cc` and `factMain.cc`. Compiler used: MSVC 14.33.31629

### Compiling and building executable from separate files
```cmd
cl factMain.cc fact.cc /EHsc
```

### Separate compilation

```cmd
cl -c factMain.cc /EHsc
cl -c fact.cc /EHsc
```

### Building executable from object files

```cmd
cl factMain.obj fact.obj
```

### Customizing executable name at linking

```cmd
cl factMain.obj fact.obj -o main
```

## 6.12 | Rewrite the program from exercise 6.10 to use references instead of pointers to swap the values of two ints. Which version do you think would be easier to use and why?

References version is better, because it's easier to read and understand what it's doing.

## 6.13 | Assuming T is the name of a type, explain the difference between a function declared as `void f(T)` and `void f(T&)`.

`void f(T)` is a function which copies the value in its scope to use it.
`void f(T&)` is a function which refernces to the value passed to it, so it can modify its value.

## 6.14 | Give an example of when a parameter should be a reference type. Give an example of when a parameter should not be a reference.

### Using reference
When you want to modify an argument's value or to avoid copying an argument's value, thus saving up memory.
```c++
void func(int& num){
    num = 3;
}
```

### Using parameters by value
When you need to copy the value for some reason. Probably the original argument is gonna change, so you need to save its value.
```c++
int func(int num){
    return ++num;
}
```

## 6.15 Explain the rationale for the type of each of `find_char`'s parameters. 

### In particular, why is `s` a reference to const but `occurs` is a plain reference? 
- Because you don't want to change `s`'s reference value. However you do want to increment `occurs`'s reference value.

### Why are these parameters references, but the `char` parameter is not?
- `s` could be potentially a big variable, so we avoid copying it and saving memory.
- `occurs` need to be a reference to modify its value.
- `char` is only a few bytes of memory, we can affor copying that small variable.

### What could happen if we made `s` a plain reference?
- We could accidentally modify the value and mess up the program.

### What if we made `occurs` a reference to const?
- Incrementing it wouldn't be possible.

## 6.16 | The following function, although legal, is less useful than it might be. Identify and correct the limitation on this function:

```c++
bool isempty(string& s){
    return s.empty();
}
```

You can't use literal strings (c-style strings) as arguments, since we need reference to an object.

## 6.17 | Write a function to determine whether a string contains any capital letters. Write a function to change a string to all lowercase. Do the parameters you used in these functions have the same type? If so, why? If not, why not? 
> See `17.cpp`
Both have the same, it's useless to check if a literal string is empty, because it's a constant.

## 6.18 | Write declarations for each of the following functions. When you write these declarations, use the name of the function to indicate what the function does.

(a) A function named `compare` that returns a `bool` and has two parameters that are references to a class named `matrix`.

```c++
bool compare(const matrix&, const matrix&);
```

(b) A function named `change_val` that returns a `vector<int>` iterator and takes two parameters: One is an int and the other is an iterator for a `vector<int>`

```c++
vector<int> change_val(int, vector<int>::iterator&);
```

## 6.19 | Given the following declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why:

```c++
double calc(double);
int count(const string&, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
```
### (a)
```c++
calc(23.4, 55.1);
```
> Illegal. No function matches those arguments. Too many.
### (b)
```c++
count("abcda", "a")
```
> Illegal. "a" should be a char not a string.

(c)
```c++
calc(66);
```
> Legal.

(d)
```c++
sum(vec.begin(), vec.end(), 3.8);
```
> Legal.

## 6.20 | When should reference parameters be references to `const`? What happens if we make a parameter a plain reference when it could be a reference to `const`?

- We should have a reference to const when we wanna avoid copying a big object but we don't wanna change its value.

- If we don't follow this logic, we can potentially modify data and mess up our program.

## 6.24 | Explain the behavior of the following function. If there are problems in the code, explain what they are and how you might fix them.

```c++
void print(const int ia[10])
{
	for(size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}
```
It's syntatically correct, however it's useless for any array that has other size than 10. We should provide an arbitrary size parameter to be able to handle any array size.

## 6.28 | In the second version of error_msg that has an ErrCode parameter, what is the type of elem in the for loop?
```const std::string&```

## 6.29 | When you use an initializer_list in a range for would you ever use a reference as the loop control variable? If so, why? If not, why not?

Yes! It's useful when you could expect big number of heavy data types arguments passed into the initializer_list.

## 6.30 | Compile the version of str_subrange as presented on page 223 to see what your compiler does with the indicated errors.
MSVC compiler.
```c++
30.cpp(14): error C2561: 'str_subrange': function must return a value
30.cpp(6): note: see declaration of 'str_subrange'
```

## 6.31 | When is it valid to return a reference? A reference to const?
When the reference doesn't point to an local object of the function you're gonna return from.

## 6.32 | Indicate whether the following function is legal. If so, explain what it does; if not, correct any errors and then explain it.

```c++
int &get(int *arry, int index)
{
	return arry[index];
}
int main()
{
	int ia[10];
	for(int i = 0; i != 10; ++i)
		get(ia, i) = i;
}
```

LEGAL. Basically `arry[index]` is acting as `*(array+index)`. So it's returning the reference of the array's object at the `index` position.

## 6.34 | What would happen if the stopping condition in factorial were if(val != 0)

- If the argument is positive, it behaves properly
- If the argument is negative it'll continue forever

## 6.35 | In the call to fact, why did we pass val - 1 rather than val--?

- val is used in other parts of the function, so we don't want to create anomalies by mutating `val`'s value.
- As you go back up through the call stack, val would've been 




