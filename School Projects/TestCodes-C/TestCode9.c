#include <stdio.h>
#include <unistd.h>  // For sleep function (Linux/Unix)
#include <windows.h> // For Sleep function (Windows)

void loading(int seconds) {
    printf("Loading: ");

    for (int i = 0; i < seconds; i++) {
        printf(".");
        fflush(stdout);  // Force flush to ensure output is printed
        #ifdef _WIN32
            Sleep(1000);  // Windows Sleep function (milliseconds)
        #else
            sleep(1);     // Unix/Linux Sleep function (seconds)
        #endif
    }
    printf("\nLoading Complete!\n");
}

int main() {
  
    loading(20);  // Simulate a 5-second loading process
  
    return 0;
}
