# Chapter 4 - Expressions
> These README files in each chapter contain non executable-neccesary and/or extra information.

## 4.1 | What is the value returned by 5 + 10 * 20/2?
105

## 4.2 | Using Table 4.12, parenthesize the following expressions to indicate the order in which the operands are grouped:
```c++
* vec.begin() // * (vec.begin())

* vec.begin() + 1 // (* (vec.begin())) + 1

```

## 4.3 | Order of evaluation for most of the binary operators is left undefined to give the compiler opportunities for optimization. This trategy presents a trade-off between efficient code generation and porential pitfalls in the use of the language by the programmer. Do you consider that an acceptable trade-off? Why or why not?
It's totally fine. It's not that neccesary, usually you'll use well defined variables with these operators. 

As long as you don't mutate an object in two different parts of the experession there should be no problem. Even if you do, usually whatever operator you use will take effect in whatever precedence it has, the problem are actually functions.

## 4.4 Parenthesize the following expression to show how it is evaluated. Test your answer by compiling the expression (without parentheses) and printing its result.

```c++
12 / 3 * 4 +5 * 15 + 24 % 4 / 2 // (12 / 3 * 4) + (5 * 15) + ((24 % 4) / 2)
```

## 4.5 | Determine the resul of the following expressions.
```c++
-30 * 3 + 21 / 5 // -86
-30 + 3 * 21 / 5 // -18
30 / 3 * 21 % 5  // 0 
-30 / 3 * 21 % 4 // -2
```

## 4.6 | Write an expression to determine whether an int value is even or odd.
```c++
num % 2 ? "odd" : "even" 
```

## 4.7 | What does overflow mean?
Overflow is when a value that is not within the range of values that a certain variable is capable of storing is assigned to that certain variable.

- Show three expressions that will overflow.
```c++
int o = 42949672960;
short s = o - -3215646132;
char c = s+516511231;
```

## 4.8 | Explain when are operands evaluated in the logical AND, OR and equality operators.
Left-hand operands are always evaluated first, left to right.

### AND
```c++
bool t = 0>5 && 10 > 5; // Only 10 > 5 is evaluated
```
In the case of the AND, when encoutering the first evaluation that is false the rest of expressions are skipped. Simply because it doesn't make sense to continue evaluating something that won't do any difference.

### OR
```c++
bool t = 0>5 || 10 > 5 ; // Both expressions are evaluated
```
In the case of the AND, when encoutering the first evaluation that is true the rest of expressions are skipped. Simply because it doesn't make sense to continue evaluating something that won't do any difference.

### Equality operators

Equality operators: undefined.

## 4.9 | Explain the behavior of the condition in the following if:
```c++
const char *cp = "Hello World";
if (cp && *cp) // Evaluates to true
```
- cp is a valid non-null pointer to char so it evaluates to true.
- *cp is dereferencing a valid value char from the cp pointer

## 4.11 | Write an expression that tests four values, a, b, c, and d, and ensures that a is greater than b, which is greater than c, which is greater than d.

```c++
bool result = a > b && b > c && c > d
```

## 4.12 | Assuming `i`, `j`, and `k` are all ints, explain what `i != j < k` means
The following shows step by step expression reduction
```c++
i != (j < k) // j > k is the first expression evaluated, which returns a bool 
i != bool // bool is turned into an int either 0 or 1
bool // We finally get a bool, depending on whether i was equal to the bool gotten from the previous expression. 
```

## 4.13 | What are the values of i and d after each assignment?
```c++
int i; double d;
d = i = 3.5; // i and d become 3
i = d = 3.5; //  d becomes 3.5, i becomes 3
```

## 4.14 | Explain what happens in each of the if tests:
```c++
if (42=i) // Error: can't assign to an rvalue
if (i = 42) // 42 is assigned to i, then is converted to true to be usable in the statement
```

## 4.15 | The following assignment is illegal. Why? How would you correct it?
```c++
double dval; int ival; int *pi;
dval = ival = pi = 0; // can't assign a value of a pointer (nullpointer) to an int
```

## 4.16 | Although the following are legal, they probably do not behave as the programmer expects. Why? Rewrite the expressions as you think they should be.

```c++
if (p = getPtr() != 0) // either 1 or 0 is assigned to p
if (i = 1024) // will always evaluate to true
```
### Corrections
```c++
if ((p = getPtr()) != 0) // Add parentheses to force precedence
if (i == 1024) // Use equality operator instead of assignment operator
```

## 4.17 | Explain the difference between the prefix and postfix increment.
- prefix: Inmediately increments by one and returns the new value
- postfix: increments it by one and returns a copy of the original value

## 4.18 | What would happen if the while loop on page 148 that prints the elements from a vector used the prefix increment operator?
Error: it would try to dereference an unexisting value.

## 4.19 | Given that ptr points to an int, that vec is a vector<int>, and that ival is an int, explain the behavior of each of these expressions. Which, if any, are likely to be incorrect? Why? How might each be corrected?

```c++
ptr != 0 && *ptr++ // evaluating to not have a null pointer, then dereferencing and incrementing ptr by one.
ival++ && ival // Returns current value of ival and post-increments it by one. Then evaluates whether ival is 0 or not (bool)
vec[ival++] <= vec[ival] // It's an undefined behavior. ival is used in both expressions, and it's mutating in one of them.
```
### Correction
```c++
vec[ival] <= vec[ival+1]
```

## 4.20 | Assuming that iter is a vector<string>::iterator, indicate which if any of the following expressions are legal. Explain the behavior of the legal expressions and why those that aren'r legal are in error.

```c++
*iter++; // LEGAL. iter is incremented by one, and it's old value is returned. So the original pointer is dereferenced.
(*iter)++; // ILLEGAL. First dereferences iter, however post-incrementing a string is not possible..
*iter.empty() // ILLEGAL. empty() member function is gonna try to execute first. Howevera an iterator doesn't have that member function. 
iter->empty(); // LEGAL. -> Operator dereferences iter and calls member function afterwards.
++*iter; // ILLEGAL. iter is dereferenced however post-incrementing a string is not possible.
iter++->empty(); // // LEGAL. iter is post-incremented and accesing empty member function of original iter object it points to.
```

## 4.22 | Extend the program that assigned high pass, pass, and fail grades to also assign low pass for grades between 60 and 75 inclusive. Write two versions: One version that uses only conditional operators; the other should use one or more if statements. Which version do you think is easier to understand and why?

Conditional statements are way much easier to read, because they have a more human readable syntax. Besides the conditional operator (trenary operator) can get really confusing when having a lot of nested operators.

## 4.23 | The following expression fails to compile due to operator precedence. Using Table 4.12 (p. 166), explain why it fails. How would you fix it?
```c++
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "s";
```

### Deconstructing what happens
```C++
s + s[3] == 's' ? "" : "s";
s + 'd' == 's' ? "" : "s";
"wordd" == 's' ? "" : "s"; //  Can't compare a string with a char
```

### Correction
```c++
string s = "word";
string pl = s + s[s.size() - 1] == "s" ? "" : "s"; // Using "s" instead of 's'
```
## 4.24 | Our program that distinguished between high pass, pass, and fail depended on the fact that the conditional operator is right associative. Describe how that operator would be evaluated if the operator were left associative.

```c++
// Right associative:
cout << ((grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass");

// Left associative.
// error: operands to ?: have different types ‘const char*’ and ‘bool’
cout << (((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass");
```
## 4.25 | What is the value of `~'q' << 6` on a machine with 32-bit ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the bit pattern 01110001?

```c++
~'q'<<6
~01110001 -> 11111111	11111111	11111111    10001110 -> 114 // First bit is a negative value (-2^31)
(10001110 << 6) -> 1111 1111    1111 1111   1110 0011   1000 0000 -> -7296 // 2147476352 - 2^31
0xFFFFE380
```

## 4.26 | In our grading example in this section, what would happen if we used unsigned int as the type for quiz1?

`unsigned int` based on C++ standard doesn't guarantee 32 bit integer. Therefore `unsigned long` should be used, since it guarantees 32 bit integer.

 ## 4.27 | What is the result of each of these expressions?
 0000 0011
 0000 0111
```c++
unsigned long ul1 = 3, ul2 = 7;
ul1 & ul2 // 0011 -> 3 
ul1 | ul2 // 0111 -> 7
ul1 && ul2 // true
ul1 || ul2 // true
 ```

 ## 4.30 | Using Table 4.12(p. 166), parenthesize the following expressions to match the default evaluation: (a) sizeof x + y (b) sizeof p->mem[i] (c) sizeof a < b (d) sizeof f()

```c++
sizeof x+y
(sizeof x)+y
sizeof p‐>mem[i]
sizeof(p‐>mem[i])
sizeof a < b
sizeof(a) < b
sizeof f()
If f() returns void, this statement is undefined, otherwise it returns the size of return type.
```

## 4.31 | The program in this section used the prefix increment and decrement operators. Explain why we used prefix and not postfix. What changes would have to be made to use the postfix versions? Rewrite the program using postfix operators.

In the case of the expression `ix++` it doesn't affect whether you use the prefix or postfix incremental operator because the returned value is not used.
```c++
for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
	ivec[ix] = cnt;
```

## 4.32 | Explain the following loop.
Basically `ptr` traverses through all valid non-past-end pointers.
```c++
constexpr int size = 5; // Initializing constexpr int to 5
int ia[size] = {1,2,3,4,5}; // Initializing int[5]
for (int *ptr = ia /*Pointer to first int*/, ix = 0 ; ix != size && ptr != ia+size; ++ix, ++ptr){ /* ... */ }
```

## 4.33 | Using Table 4.12(p. 166) explain what the following expression does: 
```c++
some_Value ? ++x, ++y : --x, --y
```
```c++
some_Value ? (++x, ++y) : (--x, --y) // Comma operator returns right-most value
```

## 4.34 | Given the variable definitions in this section, explain what conversions take place in the following expressions. Remember that you may need to consider the associativity of the operators.
```c++
if (fval) // float to boolean
dval = fval + ival; // integer to float, then float to double
dval + ival * cval; // character to integer, then integer to double
```

## 4.35 | Given the following definitions,

```c++ 
char cval;
int ival;
unsigned int ui;
float fval;
double dval;
```

### Identify the implicit type conversions, if any, taking place: 
```c++ 
cval = 'a' + 3; // char to int, then int to char
fval = ui - ival * 1.0; // int to double, unsigned to double, double to float
dval = ui * fval; // unsigned to float, float to double
cval = ival + fval + dval; // int to float, float to double, double to char
```

## 4.36 | Assuming `i` is an `int` and `d` is a `double`, write the expression `i *= d` so that it does integral, rather than floating-point, multiplication.
```c++
i * static_cast<int>(d);
```

## 4.37 | Rewrite each of the following old-style casts to use a named cast:
```c++
int i;
double d;
const string *ps;
char *pc;
void *pv;
pv = (void*)ps;
i = int(*pc);
pv = &d;
pc = (char*) pv;
```

```c++
pv = static_cast<void*>(const_cast<string*>ps);
i = static_cast<int>(*pc);
pv = static_cast<void*>(&d);
pc = static_cast<char*> pv;
```

## 4.38 Explain the following expression: 
```c++
double slope = static_cast<double>(j/i); // The result of j/i is casted to double
```





