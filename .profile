# .profile
export LIBRARY_PATH=$HOME/cs50/lib:$LIBRARY_PATH
export LD_LIBRARY_PATH=$HOME/cs50/lib:$LD_LIBRARY_PATH
export C_INCLUDE_PATH=$HOME/cs50/include:$C_INCLUDE_PATH
compile() {
    cc -ferror-limit=1 -gdwarf-4 -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-gnu-folding-constant -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow "$@" -lcrypt -lcs50 -lm
}
