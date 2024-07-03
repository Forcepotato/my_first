int main() {
    int num;

    std::cout << "请输入一个数：";
    std::cin >> num;

    if (num % 3 == 0 && num % 5 == 0) {
        std::cout << num << " 同时被 3 和 5 整除" << std::endl;
    }
    else {
        std::cout << num << " 不同时被 3 和 5 整除" << std::endl;
    }

    return 0;
}