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



