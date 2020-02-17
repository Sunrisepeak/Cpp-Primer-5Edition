#include <iostream>
int main() {
    unsigned char c = 'q';  // 01110001
    
    int ans = ~c << 6;
    
    std::cout << ans << std::endl;
    return 0;
}
