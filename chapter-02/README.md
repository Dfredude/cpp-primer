# Chapter 2 - Variables & Basic Types
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

## 2.25 Determine the types and the values of each of the following variables.

```c++
int* ip, i, &r = i; /*
 • ip is a pointer to int
 • i is an int
 • r is an reference to int i 
 */
int i, *ip = 0; // i is an int, ip is valid null pointer for int
int* ip, ip2; // ip is a pointer to int, ip2 is an int
```

## 2.26 Which of the following are legal? For those that are illegal, explain why.
```c++
const int buf; // ILLEGAL. const must be initialized
int cnt = 0; // LEGAL. int initialized
const int sz = cnt; // LEGAL. const int initialized to cnt's value.
++cnt; ++sz; // ILLEGAL. Value can't be assigned to const
> Tested these answers in `26.cpp`

## 2.27 Which of the following initializations are legal? Explain why.

```c++
int i = 1, &r = 0; /* ILLEGAL.
    i is intitialized to -1
    r must point to an object. 0 is literal
*/
int *const p2 = &i2 // LEGAL. p2 points to an int
const int i = -1, &r = 0; /* LEGAL. Multiple variable initialization.
i is a const int with value -1
r is a reference to a const int value 0
*/
const int *const p3 = &i2 // Legal. p3 initialized to point to const i2
const int *p1 = &i2 // Legal. p1 can point to an int
const int &const r2; // ILLEGAL. All references are const, so const keyword is not a valid type modifier. Also r2 must be initialized
const int i2 = i, &r = i; /* LEGAL
    i2 is a const int initialized to i's value
    r is a reference to i
*/
```

## 2.28 Explain the following definitions. Identify any that are illegal.

```c++
    int i, *const cp; // ILLEGAL. cp must be initialized
    int *p1, *const p2; // ILLEGAL. p2 must be initialized
    const int ic, &r = ic; // ILLEGAL.ic must be initialized
    const int *const p3; // ILLEGAL. p3 must be initialized
    const int *p; // LEGAL. p is a pointer to a const int
```

## 2.29 Using the variables in the previous exercise, which of the following assignments are legal? Explain why.

```c++
i = ic; // Legal. i is non-const, re-assigning is valid
p1 = p3; // ILLEGAL. p3 is low-level const. Since p1 is not low-level const, thus unable to assigne.
p1 = &ic; // ILLEGAL. p1 is not low-level const. Where ic is a const.
p2 = p1; // ILLEGAL. Cannot reassign a high-level const pointer
ic = *p3; // ILLEGAL. Cannot reassign const int ic
```

## 2.30 For each of the following declarations indicate whether the object being declared has top-level or low-level const

```c++
const int v2 = 0;
int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```

| Object |  Top-Level | Low-Level |
| ------ | ---------- | --------- |
|   v2   |      Y     |    NA     |
|   v1   |      N     |    N      |
|   p1   |      N     |    N      |
|   r1   |      Y     |    N      |
|   p2   |      N     |    Y      |
|   p3   |      Y     |    Y      |
|   r2   |      Y     |    Y      |

## 2.31 Given the declarations in the previous exercise determine wether the following assignements are legal. Explain how the top-level or low-level const applies for each case.


| Object   |Legal|Top-Level const|Low-Level const|
| ------   | --- |   --------    |    ---------  |
|`r1 = v2;`|  N  |      Both     |       N       |
|`p1 = p2;`|  N  |       NA      |       p2      |
|`p2 = p1;`|  Y  |       N       |       p2      |
|`p1 = p3;`|  N  |       p3      |       p3      |
|`p2 = p3;`|  Y  |       p3      |      Both     |
