# Chapter 1 - Getting started
> These README files in each chapter contain non executable-neccesary and/or extra information.

## 2.1 | What are the differences between int. long, long long and short?
By standart the minimum size of bytes. In practice the size is also different and usually exceeds the minimum.

## 2.2 | To calculate a mortage payment, what types would you use for the rate, principal, and payment?

- ***float*** for the **rate**
- ***long*** for the **principal**
- ***short*** for the **payment**

## 2.5 | Determine the type of the following literals
### a) 
- `'a'` --> `char`
- `L'a'` --> `wchar_t`
- `"a"` --> string/array
- `L"a"` --> `wchar_t string`

### b)
- `10` --> `int`
- `10u` --> `unsigned`
- `10L` --> `Long`
- `10uL` --> `unsigned long`
- `012` --> `int`
- `0xc` --> `int`

### c)
- `3.14` --> `double`
- `3.14f` --> `float`
- `3.14` --> `long double`

### d)
- `10` --> `int`
- `10u` --> `unsigned`
- `10.` --> `double`
- `10e-2` --> `double`

## 2.6 | What are the differences between the following definitions
```c++
int month = 9, day = 7; // Decimal
int month = 09, day= 07; // Octal
```

### 2.7 | What values do these literals represent? What type does each have?
- a) `string`
```c++
Who goes with Fergus?

```
- b) `long double`
```c++
31.4
```
- c) `float`
```c++
1024.0
```
- d) `long double`
```c++
3.14
```

## 2.9 | Illegal 
Can't use a declaration statement to store input from the cin function.
```c++
std::cin >> int input_value; // Illegal
```
Can't initialize a float to an int, as part of the new standard
```c++
int i = { 3.14 }; //Illegal 
```
This is a valid initialization, as long as wage has already been declared.
```c++
double salary = wage = 9999.99; // Legal
```
This initialization is totally valid, just tak into account that the new data type `int` loses precision. In other words the integral value is what is stored.
```c++
int i = 3.14; // Legal
```