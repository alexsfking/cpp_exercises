
//Design a class named Box to specifications
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    long length,breadth,height;
    public:
        Box(){
            length=0;
            breadth=0;
            height=0;
        }
        Box(int l, int b, int h){
            length=l;
            breadth=b;
            height=h;
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        int getHeight(){
            return height;
        }
        long long CalculateVolume(){
            return length*breadth*height;
        }
        bool operator<(const Box& b){
            if(this->length<b.length){
                return true;
            }
            if(this->breadth<b.breadth){
                if(this->length==b.length){
                    return true;
                }
            }
            if(this->height<b.height){
                if(this->breadth==b.breadth){
                    if(this->length==b.length){
                        return true;
                    }
                }
            }
            return false;
        }
        friend ostream& operator<<(ostream& output, const Box& b){
            output << b.length << ' ' << b.breadth << ' ' << b.height;
            return output;
        }
};


