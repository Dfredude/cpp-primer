# Chapter 1 - Getting started
> These README files in each chapter will contain non executable-neccesary exercises

## 1.6
Explain wether the following program fragment is legal.
```
std::cout << "The sum of " << num1;
<< " and " << num2;
<< " is: " << num1+num2;
```
- It's illegal, due to the "line token breaker" which is the ' ; ' in line number 2.
- Removing it would fix the code.

## 1.8
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