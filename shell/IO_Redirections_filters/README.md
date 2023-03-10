# Shell I/O Redirections and filters Concepts
## Resources
- [x] [Shell, I/O Redirection](http://linuxcommand.org/lc3_lts0070.php)
- [x] [Special Characters](http://mywiki.wooledge.org/BashGuide/SpecialCharacters)
## Learning Objectives
### General
* What happens when you type $ ls -l *.txt
	- Display a list on long format of all .txt files in the current directory.
### Shell, I/O Redirection
* What do the commands head, tail, find, wc, sort, uniq, grep, tr do
	- head - Outputs the first few lines of its input. Useful for getting the header of a file.
	- tail - Outputs the last few lines of its input. Useful for things like getting the most recent entries from a log file.
	- find - search for files in a directory hierarchy
	- wc - print newline, word, and byte counts for each file
	- sort - Sorts standard input then outputs the sorted result on standard output.
	- uniq - Given a sorted stream of data from standard input, it removes duplicate lines of data (i.e., it makes sure that every line is unique).
	- grep - Examines each line of data it receives from standard input and outputs every line that contains a specified pattern of characters.
	- tr - Translates characters. Can be used to perform tasks such as upper/lowercase conversions or changing line termination characters from one type to another (for example, converting DOS text files into Unix style text files).
* How to redirect standard output to a file
	- To redirect standard output to a file, the ">" character is used. E.g. ls > file_list.txt
* How to get standard input from a file instead of the keyboard
	- To redirect standard input from a file instead of the keyboard, the "<" character is used like this: sort < file_list.txt
* How to send the output from one program to the input of another program
	- With pipelines, the standard output of one command is fed into the standard input of another. Here is a very useful example: ls -l | less
* How to combine commands and filters with redirections
	- Filters take standard input and perform an operation upon it and send the results to standard output. In this way, they can be combined to process information in powerful ways
### Special Characters
* What are special characters
	- They are characters that are evaluated by Bash to have a non-literal meaning. These characters carry out a special instruction, or have an alternate meaning; they are called "special characters", or "meta-characters".
* Understand what do the white spaces, single quotes, double quotes, backslash, comment, pipe, command separator, tilde and how and when to use them
	- " " Whitespace — this is a tab, newline, vertical tab, form feed, carriage return, or space. Bash uses whitespace to determine where words begin and end. The first word is the command name and additional words become arguments to that command.
	- '' Single quotes — protect the text inside them so that it has a literal meaning. With them, generally any kind of interpretation by Bash is ignored: special characters are passed over and multiple words are prevented from being split.
	- "" Double quotes — protect the text inside them from being split into multiple words or arguments, yet allow substitutions to occur; the meaning of most other special characters is usually prevented.
	- '#' Comment — the # character begins a commentary that extends to the end of the line. Comments are notes of explanation and are not processed by the shell.
	- \ Escape — (backslash) prevents the next character from being interpreted as a special character. This works outside of quoting, inside double quotes, and generally ignored in single quotes.
	- | Pipe — send the output from one command to the input of another command. This is a method of chaining commands together. Example: echo "Hello beautiful." | grep -o beautiful.
	- ; Command separator — used to separate multiple commands that are on the same line.
	- ~ Home directory — the tilde is a representation of a home directory. When alone or followed by a /, it means the current user's home directory; otherwise, a username must be specified (e.g. ls ~/Documents; cp ~john/.bashrc .).
### Other Man Pages
* How to display a line of text
	- head -<line number> <filename> | tail +<line_number>
* How to concatenate files and print on the standard output
	- cat <filename>
* How to reverse a string
	- rev command
* How to remove sections from each line of files
	- cut command
* What is the /etc/passwd file and what is its format
	- Traditionally, the /etc/passwd file is used to keep track of every registered user that has access to a system. The /etc/passwd file is a colon-separated file that contains the following information: User name. Encrypted password.
* What is the /etc/shadow file and what is its format
	- The /etc/shadow file provides an enhanced authentication mechanism for Linux systems by tightening access at the account level. This text file stores actual passwords in hashed format, along with additional information related to these passwords. The one-way hash function converts the plaintext into a hash.
## Quiz answers
* Question #0
	- Which symbol should I use to redirect the standard output to a file (overwrite the file)?
		- >
* Question #1
	- Which symbol should I use to redirect the standard output to a file (appending to the file)?
		- >>
* Question #2
	- Which symbol should I use to redirect the error output to the standard output?
		- 2>&1
* Question #3
	- Which symbol should I use to start a comment?
		- '#'
* Question #4
	- Which command should I use to display the entire file content?
		- cat
* Question #5
	- Which command should I use to display the last 11 lines of a file?
		- tail -n 11 my_file
* Question #6
	- Which symbol should I use to escape a special character?
		- \
