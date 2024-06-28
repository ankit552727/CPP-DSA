//inheritance
//it allow us to create a new class(delevred/child) from an existing class (base/ parent )
//child claas in hinhereit the feature from the parentclass and can have additional feature of its own.
#include <iostream>
using namespace std;

class Base {
public:
    int x; // Public member
protected:
    int y; // Protected member
private:
    int z; // Private member
};

class PublicDerived : public Base {
public:
    void display() {
        cout << "Public Derived: x = " << x << ", y = " << y << endl;
        // z is not accessible here (private in Base)
    }
};

class ProtectedDerived : protected Base {
public:
    void display() {
        cout << "Protected Derived: x = " << x << ", y = " << y << endl;
        // z is not accessible here (private in Base)
    }
};

class PrivateDerived : private Base {
public:
    void display() {
        cout << "Private Derived: x = " << x << ", y = " << y << endl;
        // z is not accessible here (private in Base)
    }
};

int main() {
    PublicDerived pubObj;
    pubObj.x = 10;
    // pubObj.y = 20; // Error: y is protected
    // pubObj.z = 30; // Error: z is private
    pubObj.display();

    ProtectedDerived protObj;
    // protObj.x = 10; // Error: x is protected
    // protObj.y = 20; // Error: y is protected
    // protObj.z = 30; // Error: z is private
    protObj.display();

    PrivateDerived privObj;
    // privObj.x = 10; // Error: x is private
    // privObj.y = 20; // Error: y is private
    // privObj.z = 30; // Error: z is private
    privObj.display();

    return 0;
}
