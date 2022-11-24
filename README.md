Holberton _printf project.

_printf - manual page


NAME

_printf - prints the string to standard output

SYNOPSIS

_printf FORMAT [ARGUMENT]...


DESCRIPTION

The function reads a string of characters with or without a specific format and then prints it to the standard output.

FORMAT OPTIONS

The formats that this function receives are:

%s : Print a string

%c : Print a character

%d : Print a number as a integer

%i : Print a number as a integer
RETURN VALUE 
Return the length of the string impressed.

EXAMPLE

Int main()

  {

    _printf(“%d”, 1024);
  
  }

Output:

	1024

Flowchard:

```mermaid
graph LR
A(_printf) --> B[1] --> C[2]
C --> D[3] --> E[4] --> F[5]
F --> G{6} --true--> H1[7] --> H2[9]
G --false--> H2[8] --> I{9} --true--> J1[10]
J1[11] --> J3[12] --> J4(13)
I{9} --false--> J2{11}
```
