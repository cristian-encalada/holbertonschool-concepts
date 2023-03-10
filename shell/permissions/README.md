# Shell Permissions Concepts
## Resources
- [x] [Permissions](http://linuxcommand.org/lc3_lts0090.php)
## Learning Objectives
### Permissions
* What do the commands chmod, sudo, su, chown, chgrp do
	- chmod - modify file access rights
	- su - temporarily become the superuser
	- sudo - temporarily become the superuser
	- chown - change file ownership
	- chgrp - change a file's group ownership
* Linux file permissions
	- On a Linux system, each file and directory is assigned access rights for the owner of the file, the members of a group of related users, and everybody else. Rights can be assigned to read a file, to write a file, and to execute a file (i.e., run the file as a program).
* How to represent each of the three sets of permissions (owner, group, and other) as a single digit
	- The table below gives numbers for all for permissions types.
	Number	Permission Type		Symbol
	0	No Permission		___
	1	Execute			x
	2	Write			-w-
	3	Execute + Write		-wx
	4	Read			r–
	5	Read + Execute		r-x
	6	Read +Write		rw-
	7	Read + Write +Execute	rwx
* How to change permissions, owner and group of a file
	- There are two basic ways of using chmod to change file permissions: 
		- The symbolic method
				Access class	Operator	Access Type
		u (user)	+ (add access)	r (read)
		g (group)	- (remove access)	w (write)
		o (other)	= (set exact access)	x (execute)
		a (all: u, g, and o)
		- The absolute form.
		Permission	Number
		Read (r)	4
		Write (w)	2
		Execute (x)	1
* Why can’t a normal user chown a file
	- Regular Linux users don't have permissions to change the file owner even as the owner of the file. Only the root user or a user with root privileges may change the owner of the file
* How to run a command with root privileges
	- Both su and sudo elevate privileges assigned to the current user.
	The main difference between the two is that su requires the password of the target account, while sudo requires the password of the current user. Therefore, it is much safer to use sudo since it doesn’t include exchanging sensitive information.
	Additionally, it is advisable to stick to sudo when performing tasks that require root privileges. By doing so, the current user is only granted privileged for the specified command. On the other hand, su switches to the root user completely, exposing the entire system to potential accidental modification. More info [su vs sudo differences](https://phoenixnap.com/kb/sudo-vs-su-differences)
* How to change user ID or become superuser
	- The su command is used to become another user during a login session. Invoked without a username, su defaults to becoming the superuser.
### Other man pages
* How to create a user
	- useradd <username>
* How to create a group
	- groupadd <groupname>
* How to print real and effective user and group IDs
	- id -r - Print the real ID instead of the effective ID, with -ugG
	- id -u - Print only the effective user ID
	- id -g - Print only the effective group ID
* How to print the groups a user is in
	- groups <username>
* How to print the effective userid
	- id -u - Print only the effective user ID
For more information check [id command](https://edumotivation.com/id-command/)
## Quiz Answers
* Question #0
	- Which command should I use for changing a file permission?
		- chmod
* Question #1
	- Which command should I use for changing a file owner?
		- chown
* Question #2
	- What is the permission value for a file without any restriction?
		- 777
* Question #3
	- What is the permission value for a file read only for the group owner?
		- 040
* Question #4
	- What is the numerical value for the rwx------ permission?
		- 700
* Question #5
	- What is the numerical value for the r-xr--r-- permission?
		- 544
* Question #6
	- What is the numerical value for the ----w---x permission?
		- 021
