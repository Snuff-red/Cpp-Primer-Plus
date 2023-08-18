#include <iostream>

void simon(int n);

int main(void) {
    using namespace std;

    simon(3);

    return 0;
}

void simon(int n) {
    using namespace std;

    cout << "Simon says touch your toes " << n << " times. " << endl;
}