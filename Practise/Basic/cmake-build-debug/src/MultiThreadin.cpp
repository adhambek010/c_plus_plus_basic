#include <iostream>
#include <thread>

class Counter1 {
public:
    volatile long count1 = 0;
    volatile long count2 = 0;
};

int main() {
    Counter1 counter1;
    Counter1 counter2;

    long iterations = 1'000'000'000L;

    std::thread thread1([&]() {
        auto startTime = std::chrono::high_resolution_clock::now();
        for (long i = 0; i < iterations; i++) {
            counter1.count1 += 1;
        }
        auto endTime = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
        std::cout << "Total time of Thread 1: " << duration << std::endl;
    });

    std::thread thread2([&]() {
        auto startTime = std::chrono::high_resolution_clock::now();
        for (long i = 0; i < iterations; i++) {
            counter2.count2 += 1;
        }
        auto endTime = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
        std::cout << "Total time of Thread 2: " << duration << std::endl;
    });

    thread1.join();
    thread2.join();

    return 0;
}

