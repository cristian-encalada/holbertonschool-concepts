# Shell Basic Concepts
> Repository created to review concepts related with shell  <br>
Holberton Dev Bootcamp - Montevideo
## Shell Navigation
### Resources
- [x] [Linux navigation](http://linuxcommand.org/lc3_lts0020.php)
- [x] [Linux - looking around](http://linuxcommand.org/lc3_lts0030.php)
- [x] [Linux - manipulating files](http://linuxcommand.org/lc3_lts0050.php)
- [x] [What is "the Shell"?](http://linuxcommand.org/lc3_lts0010.php)
- [x] [Working with Commands](http://linuxcommand.org/lc3_lts0060.php)
- [x] [Reading Man pages](http://linuxcommand.org/lc3_man_pages/man1.html)
- [x] [Keyboard shortcuts for Bash](https://www.howtogeek.com/181/keyboard-shortcuts-for-bash-command-shell-for-ubuntu-debian-suse-redhat-linux-etc/)
- [x] [LTS](https://wiki.ubuntu.com/LTS)
- [x] [Shebang](https://en.wikipedia.org/wiki/Shebang_%28Unix%29)
### Learning Objectives
#### General
* What does RTFM mean?
	- Read The F** Manual
* What is a Shebang
	- It's the character sequence consisting of the characters number sign and exclamation mark (#!) at the beginning of a script.
#### What is the Shell
* What is the shell?
	- The shell is a program that takes commands from the keyboard and gives them to the operating system to perform
* What is the difference between a terminal and a shell
	- A terminal is a program that opens a window and lets you interact with the shell (emulator).
	- The terminal is the GUI window that you see on the screen. It takes commands and shows output. The shell is the software that interprets and executes the various commands that we type in the terminal. Bash is a particular shell.
* What is the shell prompt
	- The shell prompt (or command line) is where one types commands
* How to use the history (the basics)
	- Press the up-arrow key. Watch how our previous command returns. Yes, we have command history. Press the down-arrow and we get the blank line again.
	- Now, try the left and right-arrow keys. We can position the text cursor anywhere in the command line. This allows us to easily correct mistakes.
#### Navigation
* What do the commands or built-ins cd, pwd, ls do
	- **cd** Change directory
	- **pwd**  Prints the current working directory path
	- **ls** display a list of files and sub-directories in the current directory
* What are the . and .. directories
	- . current directory
	- .. parent directory
* What is the working directory, how to print it and how to change it
	- **pwd**  Prints the current working directory path
	- **cd** Change directory
* What is the root directory
	- /
* What is the home directory, and how to go there
	- $HOME
	- **cd** or **cd ~**
* What is the difference between the root directory and the home directory of the user root
	- The root directory is the topmost level of the system drive. The home directory is a subdirectory of the root directory. It is denoted by a slash '/'.
* What are the characteristics of hidden files and how to list them
	- A hidden file is a file that is not normally visible when examining the contents of the directory in which it resides
	- ls -a
* What does the command cd - do
	- Using a dash as an argument of cd will change the current directory to the previous working directory
#### Looking around
* What do the commands ls, less, file do
	- ls - list directory contents
	- less - shows a file's contents one screen at a time
	- file — determine file typefile
* Understand the ls long format and how to display it
	- ls -l
* What does the ln command do
	- ln - make links between files
* What do you find in the most common/important directories
	- Take a look at [A Guided Tour](http://linuxcommand.org/lc3_lts0040.php)
* What is a symbolic link
	- A symlink or a Symbolic Link is simply enough a shortcut to another file. It is a file that points to another file.
* What is a hard link
	- A hard link is a link that directly associates a name with a given file in an operating system
* What is the difference between a hard link and a symbolic link
	- A symbolic or soft link is an actual link to the original file, whereas a hard link is a mirror copy of the original file. For more info check [what-is-the-difference-between-a-symbolic-link-and-a-hard-link](https://stackoverflow.com/a/29786294)
#### Manipulating Files
* What are wildcards and how do they work
	- Wildcards are special characters that can stand in for unknown characters in a text value and are handy for locating multiple items with similar, but not identical data.
* How to use wildcards
	- * - represents zero or more characters
	- ? - represents a single character
	- [] - represents a range of characters
	- For more info check [Wildcards!](https://ryanstutorials.net/linuxtutorial/wildcards.php)
#### Working with Commands
* What do type, which, help, man commands do
	- type — write a description of command type
	- which - locate a command
	- help - Display information about builtin commands.
	- man - an interface to the system reference manuals
* What is an alias
	- An alias is a shortcut that references a command. An alias replaces a string that invokes a command in the Linux shell with another user-defined string
* When do you use the command help instead of man
	- help is a built-in command in the bash shell (and that shell only) that documents some of the builtin commands and keywords of that shell. That's an internal documentation system of that shell.
	- man is a system-wide documentation system that provides short reference manuals (pages) for individual commands, API functions, concepts, etc.
#### Reading Man Pages
* How to read a man page
	- Use command: man <program>
* What are man page sections
	- NAME - the name of the command in question.
	- SYNOPSIS - the structure of the command.
	- DESCRIPTION - a description of the command.
	- OPTIONS - available options for the command.
	- AUTHOR - the author of the command.
* What are the section numbers for User commands, System calls and Library functions
	- 1 - General commands
	- 2 - System calls
	- 3 - Library functions, covering in particular the C standard library
#### Keyboard Shortcuts for Bash
* Common shortcuts for Bash
	- [Keyboard shortcuts for Bash](https://www.howtogeek.com/181/keyboard-shortcuts-for-bash-command-shell-for-ubuntu-debian-suse-redhat-linux-etc/)
#### LTS
* What does LTS mean?
	- Long Term Support
### Quiz answers
* Question #0
	- What command would you use to list files on Linux?
		- ls
* Question #1
	- What does LTS stand for?
		- Long Term Support
* Question #2
	- How do you change directory on Linux?
		- cd
* Question #3
	- What does RTFM stand for?
		- Read The F** Manual
