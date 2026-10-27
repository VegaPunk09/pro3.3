#include <iostream>
#include <vector>
#include <algorithm>

class counter {
private:
    int sum = 0;
    int count = 0;

public:
    void operator()(int number) {
        if (number % 3 == 0) {
            sum += number;
            ++count;
        }
    }

    int get_sum() const {
        return sum;
    }

    int get_count() const {
        return count;
    }
};

int main() {
    std::vector<int> numbers = { 4, 1, 3, 6, 25, 54 };

    counter result = std::for_each(numbers.begin(), numbers.end(), counter{});

    std::cout << "get_sum() = " << result.get_sum() << std::endl;
    std::cout << "get_count() = " << result.get_count() << std::endl;

    return 0;
}
