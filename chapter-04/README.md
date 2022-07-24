# Chapter 3 - Strings, Vectors and Arrays
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