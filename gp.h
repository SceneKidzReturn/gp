
char* help = "Usage: %s -hlusnm <length> \n"
              "  -h: Show help\n"
              "  -l: Exclude lowercase\n"
              "  -u: Exclude uppercase\n"
              "  -s: Exclude symbols\n"
              "  -n: Exclude numbers\n"
              "  -m <amt>: Multiplies the amount of passwords that get output\n"
              "       Example: ./gp -m 5 -> (<amt>) 32 -> (<length>)\n"
              "  <length>: length of password (default: 32)\n";

#define LOWERCASE "abcdefghijklmnopqrstuvwxyz"
#define UPPERCASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define NUMBERS "0123456789"
#define SYMBOLS "!@#$%^&*()_+-=[]{};':\",./<>?`~"

char get_random_char(char *charset);
