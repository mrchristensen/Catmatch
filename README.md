# Catmatch

## Usage

Your program will be run from the command line in the following way:

./catmatch filename

The "./" at the beginning simply means that you are directing the shell to look for the program, catmatch, in the current directory (e.g., ".").  "filename" indicates that the program will take filename to read as a command-line argument.  You can also pass an environment variable CATMATCH_PATTERN, which is a pattern.

Your program will:

Print the process ID to standard error (stderr)--not standard output (stdout)--followed by two newlines.
Open the file specified on the command line
For each line in the file:
read the entire line into a buffer (i.e., "C string"; you will want to declare this as a char array);
if CATMATCH_PATTERN exists as an environment variable, check the line for the pattern specified in the environment;
print the line to standard output (stdout), prefaced with 1 or 0 (and a space), indicating that the pattern was found or not found, respectively; if CATMATCH_PATTERN was not specified, then just print 0.
Save your file as catmatch.c, and use the following command to compile your program:

gcc -o catmatch catmatch.c

Your code should compile with no warnings!

The "-o" option names the resulting binary being named "catmatch" (as opposed to the default, "a.out").

 

## Testing

Consider the file  lorem-ipsum.txt  Download .  If run with:

./catmatch lorem-ipsum.txt

and the value of the environment var CATMATCH_PATTERN was al, then the output would be:

1234

0 Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor
1 incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis
1 nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.
0 Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu
0 fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in
0 culpa qui officia deserunt mollit anim id est laborum.

(where 1234 is the process ID)

Try with several different patterns.  You can check your work with the command-line program grep. 

 

Helps

You will find the following functions helpful:
getpid()
printf() and fprintf()
fopen()
fgets()
getenv()
strstr()
Read and use the man page for each of the functions referenced above.  It will make your life easier.
See also the man pages for stdout and stderr.
If you are unfamiliar with man pages, please read the man page for man itself!
