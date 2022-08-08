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