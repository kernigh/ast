#include <unistd.h>
int code;
int main() {
    code = 1;
    if (!vfork()) code = 0;
    _exit(code);
}
