#include <iostream>

long long prime();
void print_prime(size_t count);

int main(){
    size_t a;
    std::cin >> a;
    print_prime(a);
    return 0;
}

long long prime(){
    static long long a{2};
    long long output {a};
    bool end {false};
    do {
        ++a;
        for (long long i {a - 1}; i > 1; --i){
            if (a % i == 0){
                end = false;
                break;
            } else {
                end = true;
            }
        }    
    } while(end == false);
    return output;
}

void print_prime(size_t count){
    std::cout << "The Prime Numbers, " << count << " elements : " << std::endl;
    for (size_t i{}; i < count; ++i){
        std::cout << prime() << " ";
    }
} 