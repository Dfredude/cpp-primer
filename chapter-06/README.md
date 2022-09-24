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