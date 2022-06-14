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

## 2.12 | Invalid identifiers
```c++
int double = 3.14; // INVALID
int _; // VALID
int catch-22; // INVALID
int 1_or_2 = 1; // INVALID
double Double = 3.14; // VALID
```

## 2.13 | What is the value of j in the following program
```c++
int i = 42;
int main()
{
    int i = 100;
    int j = i; // 100
}
```

## 2.15 | Which of the following definitions, if any, are invalid?
```c++
int ival = 1.01; // VALID
int &rval1 = 1.01; // INVALID reference must point to an object
int &rval2 = ival; // VALID
int &rval3; // INVALID reference must be initialized
```

## 2.16 | Reference definitions. Which of the following statements are invalid?
```c++
int i = 0, &r1 = i;
double d = 0, &r2 = d;
```
> `-->` Represents transformation of the assignment. Alias for **becomes**
- a) `r2 = 3.14159;` VALID | r2 (d)  double 0 --> double 3.14159. Remember `r2` is just another name for `d`
- b) `r2 = r1;` VALID | r2 (d) double 0 --> double 0
- c) `i = r2;` VALID | i int 0 --> int 0
- d) `r1 = d;` VALID | int 0 --> int 0

## 2.19 | Differences between References and Pointers

- References are not objects, whereas Pointers are
- We can't have references to references, but we can do pointers to pointers
- We we'll always get the object to which a reference was initially bound
- A reference must be initialized, where as a Pointer doesn't need to

## 2.21 | Explain the following definitions. 
```c++
int i = 0; // Initializing i to cero
```
### Inidicate whether they are illegal or not
```c++
double* dp = &i; // VALID | dp Pointer initialized to i's address
int *ip = i; // INVALID | Pointer int* type ip can't be initialized to int i's value
int *p = &i; // VALID | Pointer p initialized to i's address
```

## 2.22 | Assuming P is  a Pointer, explain the following code
```c++
if (p) // Pointer 'p' is converted to a bool, false if is 0,nullptr or NULL true otherwise
if (*p) // Pointer's object to which infers to is converted to a bool, 'false' if equal to 0, 'true' otherwise
```

## 2.23 | Given a Pointer **p**, can you determine wether **p** points to a valid object? If so, how? If not, why not?
**Yes** and **no**
It's possible to determine if a pointer holds an address with a valid object if at least the ponter was defined as **nullptr**, this way we can know by executing conditional statements. Like so
```c++
if (p) // True if Pointer points to a valid object, false otherwise
```
Otherwise if the ptr is undefined, this will be impossible to determine if it's valid or not because there's no way of knowing wether the bits are actually correct or not.

## 2.24 Why is the initialization of **p** legal but that of  **lp** illegal?

```c++
int i = 42;
void *p = &i; // void pointer can point to any kind of type
long *lp = &i; // long pointer cannot point to a int type
```
Non-void pointers cannot hold a different type than their corresponding type. int with int*, long with long* and so on.