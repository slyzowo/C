# C for windows

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

### Basic
0. Compile and run a C program with commmand line
1. Hello World
2. Comments
3. Escape sequences
4. Variables
6. Constants
7. Format specifiers
8. Arithmetic operators + Augmented assignment
9. User input

### Library Functions
1. Math functions
2. String functions
3. Random numbers
4. Beep
5. Swap 2 variables

### Statements
1. If statements
2. Ternary operator
3. Switch statements

### Gates
1. And logical operator
2. Or logical operator
3. Not logical operator
4. Bitwise operators

### Functions
1. Functions
2. Function prototypes
3. Return statement
4. Arguments
5. Typedef
6. Enums
7. Structs
8. Unions

### Loops
1. For loops
2. Break vs continue
3. While loops
4. Do while loop
5. Nested loops

### Arrays
1. Arrays
2. Print an array with loop
3. 2D arrays
4. Array of string
5. Sort an array (bubble sort)
6. Array of structs

### Memory
1. Memory addresses
2. Pointers
3. Malloc
4. Calloc
5. Realloc

### Input Output
1. Writing file
2. Appending files
3. Reading files
4. Deleting files

### Other
1. Macros
2. "libraries"

### compiling from command line
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

| Type               | Size    | Range                             | %char   | char meaning       |
|:-------------------|:--------|:----------------------------------|:--------|:-------------------|
| Char               | 1 byte  | -128 to +127                      | %c / %d | character or digit |
| Unsigned Char      | 1 byte  | 0 to 255                          | %c / %d | character or digit |
| Float              | 4 bytes |                                   | %f      | float              |
| Double             | 8 bytes |                                   | %lf     | long float         |
| Bool               | 1 byte  | 0 to 1                            | %d      | digit              |
| short              | 2 bytes | -32,768 to +32,767                | %d      | digit              |
| unsigned short     | 2 bytes | 0 to +65,535                      | %u      | unsigned           |
| int                | 4 bytes | -2,147,483,648 to +2,147,483,647  | %d      | digit              |
| unsigned int       | 4 bytes | 0 to +4,294,967,295               | %u      | unsigned           |
| long long          | 8 bytes | -9 quintillion to +9 quintillion  | %lld    | long long digit    |
| unsigned long long | 8 bytes | 0 to +18 quintillion              | %llu    | long long unsigned |


## String Functions Chart

| Function           | What it does                                          |
|:-------------------|:------------------------------------------------------|
| strlwr();          | Lowercases the string                                 |
| strupr();          | uppercases the string                                 |
| strcat();          | appeneds two strings together                         |
| strncat();         | appeneds n chars to string1 from string2 together     |
| strcpy();          | copys string2 to string1                              |
| strncpy();         | copys n chars to string1 from string2                 |
| strset();          | sets a char to a string                               |
| strnset();         | sets a char to a string for n chars                   |
| strrev();          | reverses a string                                     |
| strlen();          | says the string length                                |
| strcmp();          | compares two strings                                  |
| strncmp();         | compares two strings for n chars                      |
| strcmp();          | compares two strings (ignore case)                    |
| strncmpi();        | compares two strings for n chars (ignore case)        |