# Shell Concepts init files, variables and expansions
## Resources
- [x] [Ex[ansions](http://linuxcommand.org/lc3_lts0080.php)
- [x] [Shell Arithmetic](https://www.gnu.org/software/bash/manual/html_node/Shell-Arithmetic.html)
- [x] [Variables](https://tldp.org/LDP/Bash-Beginners-Guide/html/sect_03_02.html)
- [x] [Shell initialization files0](https://tldp.org/LDP/Bash-Beginners-Guide/html/sect_03_01.html)
- [x] [The alias Command](http://www.linfo.org/alias.html)
- [x] [Technical Writing](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/6/9112669886fd446a2aa3113c31319d1f468dc160.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230310%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230310T232228Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=fff57afa7f1ca7d31cffcd53ab70ae9457221c7012dff0c1985dc06ba1ed1d74)  
## Learning Objectives
### General
* What happens when you type $ ls -l *.txt
	- list all the files with extension .txt, in the current directory, in long format.
### Shell Initialization Files
* What are the /etc/profile file and the /etc/profile.d directory
	- /etc/profile file sets the environment variables at startup of the Bash shell
	- The /etc/profile. d directory contains other scripts that contain application-specific startup files, which are also executed at startup time by the shell
* What is the ~/.bashrc file
	- The . bashrc file is a script file that's executed when a user logs in. The file itself contains a series of configurations for the terminal session. This includes setting up or enabling: coloring, completion, shell history, command aliases, and more. It is a hidden file and simple ls command won't show the file.
### Variables
* What is the difference between a local and a global variable
	- Global variables or environment variables are available in all shells. The env or printenv commands can be used to display environment variables.
	- Local variables are only available in the current shell. Using the set built-in command without any options will display a list of all variables (including environment variables) and functions.
* What is a reserved variable (bash)
	- These variables are set or used by Bash, but other shells do not normally treat them specially.
* How to create, update and delete shell variables
	- Create variables: VARNAME="value" or export var=value
	- Delete variables: unset <var-name>
* What are the roles of the following reserved variables: HOME, PATH, PS1
	- HOME - The current user's home directory; the default for the cd built-in. The value of this variable is also used by tilde expansion.
	- PATH - A colon-separated list of directories in which the shell looks for commands.
	- PS1 - The primary prompt string. The default value is "'\s-\v\$ '".
* What are special parameters
	- The shell treats several parameters specially. These parameters may only be referenced; assignment to them is not allowed.
* What is the special parameter $?
	- The $? variable represents the exit status of the previous command. Exit status is a numerical value returned by every command upon its completion. As a rule, most commands return an exit status of 0 if they were successful, and 1 if they were unsuccessful.
### Expansions
* What is expansion and how to use them
	- With expansion, we type something and it is expanded into something else before the shell acts upon it. For example '*' or echo command
* What is the difference between single and double quotes and how to use them properly
	- When we need to suppress all expansions, we use single quotes
	- If we place text inside double quotes, all the special characters used by the shell lose their special meaning and are treated as ordinary characters. The exceptions are “$”, “\” (backslash), and “`” (back- quote).
* How to do command substitution with $() and backticks
	- Command substitution allows us to use the output of a command as an expansion: for example: echo $(ls)
### Shell Arithmetic
* How to perform arithmetic operations with the shell
	- In shell script all variables hold string value even if they are numbers. So, to perform arithmetic operations we use the expr command.
	- The expr command can only work with integer values. For floating point numbers we use the bc command.
	- To compute the result we enclose the expression in backticks ` `.
For more info: [Shell Programming - Arithmetic Operators](https://dyclassroom.com/unix/shell-programming-arithmetic-operators)
### Alias command
* How to create an alias
	- 1. Reducing the amount of typing that is necessary for commands or groups of commands that are long and/or tedious to type
		- alias a="gedit /etc/httpd/conf/httpd.conf"
	- 2. Specifying the default version of a program that exists in several versions on a system or specifying default options for a command
		- alias ls="ls -a"
* How to list aliases
	- alias
* How to temporarily disable an alias
	- unalias <alias_name>
### Other
* How to execute commands from a file in the current shell
	- source - Execute commands from a file in the current shell.
## Quiz answers
* Question #0
	- Which command should I use to display a variable?
		- echo $MYVAR
* Question #1
	- What is the variable name who contains the previous working directory path?
		- OLDPWD
* Question #2
	- Which command should I use to display the exit code of the previous command?
		- echo $?
* Question #3
	- Which command should I use to define a new command push for pushing in Github?
Example:
```
$ push 
Everything up-to-date
$
```
		- alias push="git push"
