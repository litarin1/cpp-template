#include "log.cpp"

int main() {
    _init_log();
    LINFO("{}", PROJECT_NAME_VERSION);
}
