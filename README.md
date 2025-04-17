# C & C++ for windows

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

## Compiling

### compiling from Command Line
Copy and paste this command to compile
```
gcc hello-world.c
```
> [!NOTE]
> Spaces do not work with file names when compiling from command line.\
> File names will vary.

Then to run the file type the name of the .exe you made.
```
a.exe
```

### compiling from Code Runner
press the triangle in the corner of your screen, and it compiles and runs.


# list of what the tutorial covers

> [!WARNING]
> This tutorial does NOT cover algorithms or how to write clean code

1. Hello World
1. Compile and run a C program with commmand line
1. Comments
1. Escape sequences
1. variables
1. Data types
1. Format specifiers
1. Constants
1. Arithmetic operators
1. Augmented assignment operators
1. User input
1. Math functions
1. Circle circumference program
1. Hypotenuse calculator program
1. If statements
1. Switch statements
1. Temperature conversion program
1. Calculator program
1. And logical operator
1. Or logical operator
1. Not logical operator
1. Functions
1. Arguments
1. Return statement
1. Ternary operator
1. Function prototypes
1. String functions
1. For loops
1. While loops
1. Do while loop
1. Nested loops
1. Break vs continue
1. Arrays
1. Print an array with loop
1. 2D arrays
1. Array of string
1. Swap values of two variables
1. Sort an array
1. Structs
1. Typedef
1. Array of structs
1. Enums
1. Random numbers
1. Number guessing game
1. Quiz game
1. Bitwise operators
1. Memory addresses
1. Pointers
1. Writing file
1. Reading files
1. Tic Tac Toe game


## Format Specifiers Chart

> [!WARNING]
> If you go above the range it overflows and loops back to the minimum value.

| Type               | Size    | Range                            | %char   | char meaning       |
|:-------------------|:--------|:---------------------------------|:--------|:-------------------|
| Char               | 1 byte  | -128 to +127                     | %c / %d | character or digit |
| Unsigned Char      | 1 byte  | 0 to 255                         | %c / %d | character or digit |
| Float              | 4 bytes |                                  | %f      | float              |
| Double             | 8 bytes |                                  | %lf     | long float         |
| Bool               | 1 byte  | 0 to 1                           | %d      | digit              |
| short              | 2 bytes | -32,768 to +32,767               | %d      | digit              |
| unsigned short     | 2 bytes | 0 to +65,535                     | %u      | unsigned           |
| int                | 4 bytes | -2,147,483,648 to +2,147,483,647 | %d      | digit              |
| unsigned int       | 4 bytes | 0 to +4,294,967,295              | %u      | unsigned           |
| long long          | 8 bytes |-9 quintillion to +9 quintillion  | %lld    | long long digit    |
| unsigned long long | 8 bytes |0 to +18 quintillion              | %llu    | long long unsigned |
