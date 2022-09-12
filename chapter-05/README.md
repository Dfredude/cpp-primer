# Chapter 5 - Statements

## 5.1 | What is a null statement?
A null statement is an empty statement. In other words there's no expressions within it. It's denoted :
```c++
;
```

## 5.2 | What is a block? When might you use a block?
A block is a compound statement, and a compound statement are 0 or more statements within curly braces. Like so:
```c++
{
    statement_1;
    statement_2;
    statement_3;
}
```

## 5.3 | Use the comma operator to rewrite the while loop from 1.4.1 so that it no longer requires a block. Explain whether this rewrite improves or diminishes the readability of the code.

```c++
int sum = 0, val = 1;
while (val <= 10) sum += val, ++val;
cout << "Sum of 1 to 10 inclusive is: " << sum << endl; 
```
This rewrite is interesting, and it's definitely worth it if the expressions are simple enough to be read easily. Otherwise using a block would be better.

## 5.4 | Explain each of the following examples, and correct any problems you detect.

### a)
```c++
while (string::iterator iter != s.end()){ /* ... */} 
```
This indefinite loop needs a way to get to the base case (The while loop conditional statement). Like so:

```c++
while (string::iterator iter != s.end()){ iter++; } 
```

### b)
```c++
while (bool status = find(word)) { /* .. */ }
if (!status) { /* ... */ }
```
The if conditional statement is unneccessary since the status boolean will always be false after finishing the loop.

## 5.7 | Correct the errors in each of the following code
### a)
```c++
if (ival1 != ival2)
    ival1 = ival2
else ival1 = ival2 = 0;
```
It's missing a semicolon in the statement within the if statement. `ival1 = ival2;`
### b)
```c++
if (ival < minval)
    minval = ival;
    occurs = 1;
```
We need to use a bloc statement. In other words just enclose the last 2 statements within curly braces.
### c)
```c++
if (int ival = get_value())
    cout << "ival = " << ival << endl;
if (!ival)
    cout << "ival = 0\n";
```
ival is not declared for the scope of the second if statement.
### d)
```c++
if (ival = 0)
    ival = getvalue();
```
warning: ival is being reassigned to 0

## 5.8 | What is a dangling else?

It's when an else statement doesn't work with the if statement your wanted. Remember an else will relate to the closest if that is in scope!