class MyClass {
public:
    static int staticInt;
    static void staticMethod() {
        // method implementation
    }
};

int MyClass::staticInt = 0; // initialization of static member

int main() {
    MyClass::staticInt = 5; // accessing static member directly through class name
    MyClass::staticMethod(); // calling static method directly through class name
}
