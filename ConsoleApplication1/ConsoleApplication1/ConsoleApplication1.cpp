

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Hello World!\n";
    cout << "Yazilacak seyi yaz len: ";
    getline(cin, name);
    
    cout << "Yazdigin sey bu: " << name;

    return 0;
}
