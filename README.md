# C23 for windows

> [!WARNING]
> I will redo this tutorial at some point, mostly to add more and to refactor some. I *may* make a youtube series on this. :3

# installation
## Downloads
Download the [C/C++ compiler](https://www.msys2.org/) and [Visual Studio Code](https://code.visualstudio.com/download)

## Installing Msys2
Run the program follow the wizard to install it. After that copy and paste this command into the terminal.
```
pacman -S mingw-w64-ucrt-x86_64-gcc
```
afterwards check to see if it downloaded correctly using this command.
```
gcc --version
```
If it works you'll see `gcc.exe (Rev2, Built by MSYS2 project) 13.2.0`

> [!TIP]
> Version numbers will vary

## Installing Visual Studio Code
Run the Visual Studio Code.exe.\
when it asks for `select additional tasks` check all the boxes.

- [x] Create a desktop icon
- [x] Add "Open with Code action to Windows Explorer file context menu
- [x] Add "Open with Code action to Windows Explorer directory context menu
- [x] Register Code as an editor for supported file types
- [x] Add to PATH

Finish the installation.

### Addons
Download the Visual Studio Code addons [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack).
It comes with 
- Debugger
- Intellisense
- Cmake
- Themes

> [!NOTE]
> This next part is optional, but is recommended to new users.

Download [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to run your code faster and easier

### compiling from Code Runner
press the triangle in the corner of your screen, and it compiles and runs.

# Tutorial Topics

> [!WARNING]
> This tutorial does NOT cover algorithms or how to write clean code.

### 1_Basic
01. 🟩 Hello World
02. 🟩 Compile and run a C program with commmand line
03. 🟩 Comments
04. 🟩 Escape sequences
05. 🟩 Variables & Constants
06. 🟩 Type conversion
07. 🟩 Format specifiers
08. 🟩 Arithmetic operators + Augmented assignment
09. 🟩 User input

### 2_Libraries_1
10. 🟩 Math functions
11. 🟩 String functions
12. 🟩 Swap 2 variables
13. 🟩 Beep
14. 🟩 Random numbers

### 3_Statements
15. 🟩 If statements
16. 🟩 Ternary operator
17. 🟩 Switch statements

### 4_Logic_Gates
18. 🟩 And logical operator
19. 🟩 Or logical operator
20. 🟩 Not logical operator
21. 🟩 Bitwise operators

### 5_Functions
22. 🟩 Functions
23. 🟩 Function prototypes
24. 🟩 Return statement
25. 🟩 Arguments
26. 🟩 Variable Scope
27. 🟩 Variadic Functions
28. 🟩 Typedef
29. 🟩 Enums
30. 🟩 Structs
31. 🟩 Unions

### 6_Libraries_2
32. 🟨 Complex Math functions
33. 🟨 Asserts
34. 🟨 Strings (Unicode | Ansi)
35. 🟨 Time 
36. 🟨 Threads
37. 🟨 Stdlib

### 7_Loops
38. 🟩 For loops
39. 🟩 Break vs continue
40. 🟩 While loops
41. 🟩 Do while loop
42. 🟩 Nested loops

### 8_Arrays
43. 🟩 Arrays
44. 🟨 Multi-Dimensional Arrays
45. 🟩 Print an array with loop
46. 🟩 2D arrays
47. 🟩 Array of string
48. 🟩 Sort an array (bubble sort)
49. 🟩 Array of structs

### 9_Memory
50. 🟩 Memory addresses
51. 🟩 Pointers
52. 🟩 Malloc
53. 🟩 Calloc
54. 🟩 Realloc

### 10_Files
55. 🟩 Writing file
56. 🟩 Appending files
57. 🟩 Reading files
58. 🟩 Deleting files
59. 🟨 Static libraries
50. 🟨 Dynamic libraries

### 11_Preprocessor
60. 🟩 Macros

### Compiling from command line
To Test to see if you have the compiler, type in this command
```
gcc --version
```

Copy and paste this command to compile
```
gcc helloWorld.c
```

> [!NOTE]
> Spaces do not work with file names when compiling from command line.\
> File names will vary.

Then to run the file type the name of the .exe you made.
```
a.exe
```

## Format Specifiers Chart

> [!WARNING]
> If you go above the range, it will overflow and loop back to the minimum value.

| Type               | Size    | Range                                                     | %char   | char meaning       |
|:-------------------|:--------|:----------------------------------------------------------|:--------|:-------------------|
| Char               | 1 byte  | -128 to +127                                              | %c / %d | character or digit |
| Unsigned Char      | 1 byte  | 0 to 255                                                  | %c / %d | character or digit |
| Float              | 4 bytes |                                                           | %f      | float              |
| Double             | 8 bytes |                                                           | %lf     | long float         |
| Bool               | 1 byte  | 0 to 1                                                    | %d      | digit              |
| short              | 2 bytes | -32,768 to +32,767                                        | %d      | digit              |
| unsigned short     | 2 bytes | 0 to +65,535                                              | %u      | unsigned           |
| int                | 4 bytes | -2,147,483,648 to +2,147,483,647                          | %d      | digit              |
| unsigned int       | 4 bytes | 0 to +4,294,967,295                                       | %u      | unsigned           |
| long long          | 8 bytes | -9,223,372,036,854,775,807 to +9,223,372,036,854,775,807  | %lld    | long long digit    |
| unsigned long long | 8 bytes | 0 to +18,446,744,073,709,551,615                          | %llu    | long long unsigned |


## String Functions Chart

| Function           | What it does                                      |
|:-------------------|:--------------------------------------------------|
| strlwr();          | Lowercases the string                             |
| strupr();          | uppercases the string                             |
| strcat();          | appeneds two strings together                     |
| strncat();         | appeneds n chars to string1 from string2 together |
| strcpy();          | copys string2 to string1                          |
| strncpy();         | copys n chars to string1 from string2             |
| strset();          | sets a char to a string                           |
| strnset();         | sets a char to a string for n chars               |
| strrev();          | reverses a string                                 |
| strlen();          | says the string length                            |
| strcmp();          | compares two strings                              |
| strncmp();         | compares two strings for n chars                  |
| strcmp();          | compares two strings (ignore case)                |
| strncmpi();        | compares two strings for n chars (ignore case)    |