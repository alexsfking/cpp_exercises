
// You are given a main function which reads the enumeration values for two different types as input, 
// then prints out the corresponding enumeration names. Write a class template that can provide the 
// names of the enumeration values for both types. If the enumeration value is not valid, then print 
// unknown.

// Define specializations for the Traits class template here.
template <typename T>
struct Traits{
    private:
    static const int NAMES_LENGTH;
    static const string NAMES[];
    
    public:
    static string name(int index)
    {
        if (index < 0 || index >= NAMES_LENGTH)
            return "unknown";
        return NAMES[index];
    }
};
template <> const int Traits<Fruit>::NAMES_LENGTH = 3;
template <> const string Traits<Fruit>::NAMES[] = {"apple", "orange", "pear"};

template <> const int Traits<Color>::NAMES_LENGTH = 3;
template <> const string Traits<Color>::NAMES[] = {"red", "green", "orange"};

