<img src="https://imgur.com/HBL8i9J.png" width="1200" height="300"/>

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

%b : prints a number as a binary.

%u : print an unsigned number.

%o : prints a number as an octal.

%x : prints a number as a hex.

%X : prints a number as an uppercase hex.

RETURN VALUE 

Return the length of the string impressed.

EXAMPLE

Int main()

  {

    _printf(“%d”, 1024);
  
  }

Output:

	1024

Flowchart:

<img src=https://imgur.com/UF1CgaX.png/>
