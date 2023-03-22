# Source code management

## What is source code management?

It allows a developer to organize code iterations chronologically, and version it for an application. The most powerful features of source code management systems are in how they allow teams of very diverse sizes to work together on the same application simultaneously. <br>

Some terms that are common to all of them: <br>

* A project will be called **repository**, it’s representing the index/the filesystem root of your project.
* Developers might create **branches** of the codebase, that they will iterate on separately to other developers. For instance, a branch can be meant to be used for a given feature, or a given bug fix. One can create however many branches they need.
* Once a branch is ready for it (it’s been tested, peer-reviewed, etc.), it can be **merged** back to the main branch. The main branch may be called differently: in Git it’s called **master** , in SVN it’s called **trunk**.
* While coding on their branch, developers are meant to work in small, atomic iterations, called **commits**. All commits have a commit message describing in one sentence what’s in there.
* All commits together are called the **history** , and it’s a big deal to write meaningful commits and commit messages in order to keep the project’s history clean at a glance, to understand what has been going on and who did what.
* Some people might be modifying the same pieces on the codebase on different branches, and this could create **conflicts** when one merges those branches together. Some of those conflicts can obviously only be fixed by a human, and each system has a different way to manage merge conflicts.

## Which systems exist?

* ``SourceSafe`` was an early source code management system from Microsoft, which didn’t handle branches, merges, or conflicts. You could “check out” a file, which meant no one else was allowed to “check it out” and modify it at the same time. When you were done with it, you could “check in” the file, making it editable again to the others. Not very suitable for large teams that may work on the same file, and longer iterations in a given file. SourceSafe is discontinued today.

* ``CVS`` was among the first open-source source code management systems in the industry, and used to be wildly popular, but is barely seen anymore. It didn’t handle branches, but two people could modify the same file at the same time. People would “update” their whole directory to get everybody else’s work before starting, and “commit” their code to the server when they’re done. When they would “commit” a file that had been “committed” by someone else since last time they “updated”, the system was not able to merge, so it would consider it a conflict every time, that you would have to manually fix (even if the changes were not on the same lines, for instance).

* ``SVN`` was built upon CVS to handle branches, so a lot of terminology is the same. At some point, it was the most used system, and it is still seen in the industry, even though people are walking away from it. When you’d create a branch, it would actually copy-paste the whole codebase into another directory in the code repository; then, you’d try to merge, and it would massively compare each file one by one. Merging algorithms were smarter than the CVS ones, but you still had conflicts on most merges, even those that shouldn’t necessarily require a human. When you’d create a “tag” (which is a set version of your code, like “1.2.0”), then the whole codebase would simply be massively copy-pasted into another directory too, but without the intention to merge it back later.

* ``Git`` doesn’t copy-paste the whole codebase when branching and tagging, but stores each commit as a code iteration, in an organized structure that resembles a tree. This allows it to have a much smarter merging algorithm, and it almost never bothers you with conflicts, except for those that really need a human decision. As a result, the cost of branching/merging is very low, and people typically branch/merge a lot, therefore one should never directly work on the “master” branch, if they’re not the only developer on the project. Also: unlike its predecessors, Git allows to work and commit without needing to talk with a server, which allows to work on planes, for instance; and it also can work as a decentralized (peer-to-peer) system, although it’s very rarely done that way.

* ``Mercurial`` is very similar to Git in its concepts (although the syntax of its command-line tool is often different). It is more rarely seen in the industry than Git, but is still very relevant. It is the one used by Facebook, for instance, for its main application.

## What is the difference between Git and GitHub?

Git is everything we’ve covered so far: a source code management tool, that comes with a command-line tool for its users.<br>

GitHub is one of many services that provide at the same time:<br>

* a Git repository server to push your code to
* a web UI to that view your repositories, with their files and commits
* a number of extra features (managing your team and accesses, …) Two GitHub features you have to get familiarized with are:

		- ``Forks`` : you can fork any repository on GitHub, and it will duplicate the repository’s codebase into repository that you own. For instance, if you fork twbs/bootstrap, and your GitHub username is “my_username”, then it will create the my_username/bootstrap repository, and it will remember where it was forked from. Usually, you aren’t allowed to push on other people’s repositories, so that will give you a repository that you can push to, since you own it.

		- ``Pull requests``: once you’ve pushed your code to your repository (or sometimes to a branch of the main repository, if you’re allowed), then you can create a pull request towards the main repository’s master branch. Somebody in charge of the main repository will review your pull request (potentially asking you to change a couple of things), and merge it if it’s suitable to be in the main product.

GitHub has many competitors, two of the main ones being GitLab and BitBucket (which provide very similar services). We chose to make you use GitHub because that’s where most of the industry is (that way, you’ll be able to interact with them on their open-source projects), and it’s also where tech recruiters typically go check out to see what you’ve been up to.

## More informaton about Git
* [An interactive tutorial for beginners.](https://try.github.io)
* [A list of resources about Git, curated by GitHub.](https://help.github.com/articles/good-resources-for-learning-git-and-github/)
* This very notorious [article from 2010 introduces git-flow](http://nvie.com/posts/a-successful-git-branching-model/) , a detailed proposal for organizing collective work with Git that is still the most common today. You should talk about that each time you start a collaborative project using Git.
* Now that you can give version numbers to your code iterations, how should you number them? [Semantic versioning](http://semver.org) is the most used versioning scheme.
* [Git from the inside out](https://codewords.recurse.com/issues/two/git-from-the-inside-out)
* [Learn git branching](https://learngitbranching.js.org/?locale=es_ES)

### Important

The present information was summarized from [Holberton School Certified programs](https://www.holbertonschool.com/) in order to review/study concepts.

* [Holberton School Uruguay](https://holbertonschool.uy/)
