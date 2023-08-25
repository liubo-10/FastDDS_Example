#include <iostream>
#include <sys/time.h>

using namespace std;

static uint64_t get_boottime_ms() {
    struct timespec tp;
    clock_gettime(CLOCK_MONOTONIC, &tp);
    return (tp.tv_sec * 1000 + tp.tv_nsec / 1000000);
}

static uint64_t get_boottime_us() {
    struct timespec tp;
    clock_gettime(CLOCK_MONOTONIC, &tp);
    return (tp.tv_sec * 1000000 + tp.tv_nsec / 1000);
}

string kb_message(int n) {
    string tmp;
    n = n * 1024;
    for (int i = 0; i < n; i++) {
        char c = 'A' + i % 26;
        tmp += c;
    }
    return tmp;
}

string b_message(int n) {
    string tmp;
    //n = n * 1024;
    for (int i = 0; i < n; i++) {
        char c = 'A' + i % 26;
        tmp += c;
    }
    return tmp;
}


