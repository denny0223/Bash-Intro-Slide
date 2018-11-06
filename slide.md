%title: Shell Script 從入門到實務
%author: Denny Huang


-> Shell Script 從入門到實務 <-



-> Denny Huang <-

---

-> #  Denny Huang <-

^
- Rayark Inc. Backend Engineer


^
- [SITCON 學生計算機年會](http://sitcon.org/) 2013, 2014 總召


^
- http://denny.one


---
-> #  Survey <-



^
* Linux / Mac user?


^
* Programming?
	C / Java / JavaScript / Python ...


^
* CLI only?

---
-> # Shell? <-





^
->     user <-
->     ---------- <-
->     shell <-
->     ---------- <-
->     kernel <-
->     ---------- <-
->     hardware <-


---
-> #  Why learn shell? <-




^
->                                    <-
->                                    <-
->                                    <-
->    ######  ####### #     # ####### <-
->    #     # #       ##   ## #     # <-
->    #     # #       # # # # #     # <-
->    #     # #####   #  #  # #     # <-
->    #     # #       #     # #     # <-
->    #     # #       #     # #     # <-
->    ######  ####### #     # ####### <-

---
-> #  sh, bash, zsh ... ?


^
    $ cat /etc/shells
    /bin/sh
    /bin/bash
    /sbin/nologin
    /usr/bin/sh
    /usr/bin/bash
    /usr/sbin/nologin
    /usr/bin/tmux

^
    $ echo $SHELL

---





-> Basic knowhow <-

---

-> #  The File System Tree <-


^
- pwd - Print name of current working directory


^
- cd - Change directory


^
- ls - List directory contents

---

-> #  Manipulating Files And Directories <-


^
- cp - Copy files and directories

^
- mv - Move/rename files and directories

^
- mkdir - Create directories

^
- rm - Remove files and directories

^
- ln - Create hard and symbolic links

---
-> #  Command line format <-


^
    $ ls

^
    $ ls -a

^
    $ ls --all

^
    $ ls -a -l

^
    $ ls -al
^

---
-> #  How does that work? <-



^
- type - Indicate how a command name is interpreted

^
- which - Display which executable program will be executed

^
- alias - Create an alias for a command

---
-> #  System Environment <-



^
    $ env
    $ printenv


^
    $ echo $PATH



---
-> #  Arguments <-


^
- argc, argv


---
-> #  Ask the man! <-



^
    $ man ls


^
    $ sudo dnf install man-pages


---
-> #  Help <-



^
    $ help pwd


^
    $ ls --help


---
-> #  System Environment (cont. <-



^
- PS1
	- http://xta.github.io/HalloweenBash/
- PS2


---
-> #  rc-files <-



^
https://github.com/denny0223/rc-files


^
- bashrc


^
- inputrc


---
-> #  inputrc <-



^
emacs, vi mode

^
    $ set -o vi

^
    $ man readline

^
    $ sudo dnf install readline-devel

---

-> #  Redirection <-


^
STDIN - keyboard


^
STDOUT - screen


^
STDERR - screen

---

-> #  Redirection (cont. <-

->                               +---+ <-
->                               +--------+FD1+--------+ <-
->                               |        +---+        | <-
->                               |                     v <-
->    +--------+     +---+   +-------+                  +------+ <-
->    |Keyboard+----\>|FD0+--\>|Process|                  |Screen| <-
->    +--------+     +---+   +-------+                  +------+ <-
->                               |                     ^ <-
->                               |        +---+        | <-
->                               +--------+FD2+--------+ <-
->                               +---+ <-


---

-> #  Redirection (cont. <-


^
    $ ./a.out < in_file

^
    $ ./a.out <<.
    > First line
    > Second line
    .

^
    $ cat in_file | ./a.out

---

-> #  Redirection (cont. <-

^
    $ ./a.out > out_file

^
    $ ./a.out >> out_file

^
    $ ./a.out 2> out_file

^
    $ ./a.out 2>&1

^
    $ ./a.out &> out_file

---

-> #  Text Processing <-

^
- cat - Concatenate files and print on the standard output
^
- grep - Print lines matching a pattern
^
- sort - Sort lines of text files
^
- uniq - Report or omit repeated lines
^
- wc - Print newline, word, and byte counts for each file
^
- head - Output the first part of a file
^
- tail - Output the last part of a file
^
- tee - Read from standard input and write to standard output and files

---

-> #  sed <-

- stream editor for filtering and transforming text

^
- regex
    - https://www.regex101.com/

^
- s

^
- p

^
- d

---

-> #  sed tricky <-

- shell variable in sed
while read line; do sed -i "/${line}/d" tmpf; done < tmp

---

-> #  awk <-

- pattern scanning and processing language

^

---

-> #  example <-

- history | awk '{print $2}' | sort | uniq -c | sort -nr | head -n 20

- grep 台南 tn-ks-cfp-meetup.csv | awk -F\\" '{print $2}' | sed 's/, /\\n/g' | sort | uniq -c | sort -nr

---

-> #  sed trick <-

- $1=$2=""

- -F [][]

- -F $'\t'

---
-> #  tmux <-


- .tmux.conf

---

-> #  Resources <-


- [Bash Reference Manual](http://www.gnu.org/software/bash/manual/html_node/index.html)

- [Advanced Bash-Scripting Guide](http://www.tldp.org/LDP/abs/html/index.html)

- [The Linux Command Line](http://linuxcommand.org/tlcl.php)

- [2014-02-22-SA@Taipei](https://sites.google.com/a/study-area.org/sa-activity/home/2014-02-22-sa-taipei)

- [2013-08-SA@Tainan](https://sites.google.com/a/study-area.org/sa-activity/home/2013-08-tn)

---

-> #  Resources (cont. <-

- [Writing a Unix Shell - Part I](https://indradhanush.github.io/blog/writing-a-unix-shell-part-1/)

---

->                                  <-
->                                  <-
->                                  <-
->     #####       ##          #    <-
->    #     #     #  #        # #   <-
->    #     #      ##        #   #  <-
->    #     #     ###       #     # <-
->    #   # #    #   # #    ####### <-
->    #    #     #    #     #     # <-
->     #### #     ###  #    #     # <-

