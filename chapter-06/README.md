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

