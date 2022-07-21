#include <iostream>

//compute a^b mod n using repeated squaring
int modExp(int a,int b,int n){
    if(b == 0) return 1;
    long t = modExp(a,b/2,n);
    long c = (t * t) % n;
    if (b % 2 == 1)
        c = (c * a) % n;
    return (int)c;
}

int main() {
    int a,b,n;
    std::cout <<"Enter the three numbers:" <<std::endl;
    std::cin >> a >> b >> n;
    std::cout << modExp(a,b,n) <<std::endl;
    return 0;
}
