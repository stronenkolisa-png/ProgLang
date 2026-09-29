int main() {
    typedef unsigned long long ull;
    ull id = 123456;
    auto price = 199.99;
    decltype(price) discount = 20.0;
    int result = static_cast<int>(price - discount);
    std::cout << id << std::endl;
    std::cout << price << std::endl;
    std::cout << discount << std::endl;
    std::cout << result << std::endl;
    std::cout << sizeof(id) << std::endl;
    return 0;
}
