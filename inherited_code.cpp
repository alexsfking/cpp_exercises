
/*
You inherited a piece of code that performs username validation for your company's website.
The existing function works reasonably well, but it throws an exception when the username is 
too short. Upon review, you realize that nobody ever defined the exception.

The inherited code is provided for you in the locked section of your editor. Complete the code 
so that, when an exception is thrown, it prints Too short: n (where n is the length of the 
given username).
*/


/* Define the exception here */
class BadLengthException : std::exception {
    int n;
    public:
        BadLengthException(int n){
            this->n=n;
        }
        int what(){
            return n;
        }
};

