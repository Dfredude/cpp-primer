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

## 5.13 | Each of the following programs contain a common programming error. Identify and correct each error.
### (a)
```c++
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt++;
    case 'e': eCnt++;
    default: iouCnt++;
}
```
> If the text contains other characters than vowels, the output will be wrong for `iouCnt` since it'll count in basically any character that isn't `'a'` nor `'b'`.

### (b)
```c++
unsigned index = some_value();
switch (index) {
    case 1:
        int ix = get_value();
        ivec[ix] = index;
        break;
    default:
        ix = ivec.size() - 1;
        ivec[ix] = index;
}
```
> ix is not declared in the `default` statement. Out of scope.

### (c)

```c++
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
    case 1, 3, 5, 7, 9:
        oddcnt++;
        break;
    case 2, 4, 6, 8, 10:
        evencnt++;
        break;
}
```
> Case labels can only be a single expression. The comma operator returns the left-hand expression.

### (d)

```c++
unsigned ival = 512, jval = 1024, kval = 4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch (swt) {
    case ival:
        bufsize = ival = sizeof(int);
        break;
    case jval:
        bufsize = jval * sizeof(int);
        break;
    case kval:
        bufsize = kval * sizeog(int);
        break;
}
```

> `break;` statement is unnecessary at the the last case.

## 5.15 | Explain each of the followin loops. Correct any problems you detect.

### (a)
```c++
for (int ix = 0; ix != sz; ++ix) { /*...*/}
if (ix != sz)
    // ...
```
> `ix` is out of scope. Just put the conditional statement where the comment's at.

### (b)

```c++
int ix;
for (ix != sz; ++ix) { /* ... */}
```
> The for's form is incorrect. One statement is missing. Just add an init-statement (could be an null statement).

### (c)

```c++
for (int ix = 0; ix != sz; ++ix, ++sz){ /* ... */}
```
> Infinite loop. Just remove `++sz`

## 5.18 | Explain each of the following loops. Correct any problems you detect.
### (a)
```c++
do 
    int v1, v2;
    cout << "Please enter two numbers to sum: ";
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
while (cin);
```
> One statement or compound statement needs to post fix the `do` keyword. And the while should go afterwards.

### (b)
```c++
do {
    // ...
} while (int ival = get_response());
```
> Declaration is not allowed in a while conditional expression.

### (c)
```c++
do {
    int ival = get_response();
} while (ival)
```
> ival's out of scope

### 5.22 | The las example in this section that jumped back to `begin` could be better written using a loop. Rewrite the code to eliminate the `goto`.

```c++
int sz = get_size();
while(sz <= 0) sz = get_size();
```