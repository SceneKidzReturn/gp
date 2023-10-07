# **What Is This?**
  It is a simple password generator. I forked the og code from somewhere on github and changed it to fit my needs and improve it.
  The default length of passwords is 32 | ./gp (This will print a single password that is 32 chars long)

# **Setup**
  - ## **1. Compile**
  ```bash
  make
  ```
  # **OR:**
  ```bash
  make install
  ```

  - ## **2. Uninstall**
  ```bash
  make clean
  ```
  # **OR:**
  ```bash
  make uninstall
  ```
----------------------------------------------------------------

# **Usage: ./gp -hlusnm <length>**
  ### - -h: Show help
  ### - -l: Exclude lowercase
  ### - -u: Exclude uppercase
  ### - -s: Exclude symbols
  ### - -n: Exclude numbers
  ### - -m: Multiplies the output of passwords (default 1)
    - use it like this: ./gp -m 5 -> (5 is the amount) 32 -> (32 is the length)
    - <length> : length of password (default: 32)
      
