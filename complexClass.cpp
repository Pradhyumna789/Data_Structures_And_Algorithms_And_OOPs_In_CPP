class ComplexNumbers {
    // Complete this class
    private :
    int real;
    int imaginary;
    
    public :
    // constructor;
    ComplexNumbers(int real, int imaginary) {
        this -> real = real;
        this -> imaginary = imaginary;
    }
    
    // print function
    void print() {
        cout << real << " + i" << imaginary << endl; 
    }
    
    void plus(ComplexNumbers const &c2) {
        real += c2.real;
        imaginary += c2.imaginary;
    }
    
    void multiply(ComplexNumbers const &c2) {
        int a = ((real * c2.real) - (imaginary * c2.imaginary));
        int b =  ((imaginary * c2.real) + (real * c2.imaginary));
        real = a;
        imaginary = b;
    }
};