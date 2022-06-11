# Chapter 1 - Getting started
> These README files in each chapter will contain non executable-neccesary exercises

## 1.6 | Missing semicolon
Explain wether the following program fragment is legal.
```
std::cout << "The sum of " << num1;
<< " and " << num2;
<< " is: " << num1+num2;
```
- It's illegal, due to the "line token breaker" which is the ' ; ' in line number 2.
- Removing it would fix the code.

## 1.8 | Comments
Indicate which, if any, of the following output statements are legal:
```c++
std::cout << "/*";
```
> Legal
```c++
std::cout << "*/";
```
> Legal
```c++
std::cout << /* "*/" /* "/*" */;
```
> Legal
```c++
std::cout << /* "*/" */;
```
> Illegal

## 1.14 | While vs For
Compare & contrast the loops that used a **for** with those using a **while**. Are there any advantages or disadvantages to using either form?
> Yes there is. A **for** loop is a more robust form to create definite loops, whereas the **while** form is essentially a more free form, better usable with indefinite loops.

## 1.15 | Compiling errors

- Syntax
```c++
int main({
    return 0;
}
```
Missing closing parentheses

- Type Errors
```c++
#include<iostream>
int print(char* ptr){
    std::cout<< ptr;
}
int main(){
    print(50)//Incorrect type 'int'
}
```
In this example the function print is being passed a value of type 'int' which is not a 'char*' therefore it'll throw an error.

- Declaration errors
```c++
int main(){
    return number;
}
```
'number' hasn't been declared, therefore it doesn't exist to the compiler resulting in an error.

## 1.20 | Program using the Sales_item class
You can instead of entering input manually, use files `transactions.txt` as input, and `transactions_result` as output. Use following examples:
### Writing output overwriting data in output file.
```
20.exe <transactions >transactions_result.txt
```
### Writing output appending data in output file.
```
20.exe <transactions >>transactions_result.txt
```
