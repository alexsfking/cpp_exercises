//
// A student signed up for n workshops and wants to attend the maximum number of 
// workshops where no two workshops overlap. You must do the following:
// Implement two structures:
// 1. struct Workshop having the following members:
// 		* The workshop's start time.
// 		* The workshop's duration.
// 		* The workshop's end time.
// 2. struct Available_Workshops having the following members:
// 		* An integer, n (the number of workshops the student signed up for).
//		* An array of type Workshop array having size n.
// Implement two functions:
// 1. Available_Workshops* initialize (int start_time[], int duration[], int n)
// Creates an Available_Workshops object and initializes its elements using the 
// elements in the start_time[] and duration[] parameters (both are of size n). 
// Here, start_time[i] and duration[i] are the respective start time and duration 
// for the ith workshop. This function must return a pointer to an 
// Available_Workshops object.
// 2. int CalculateMaxWorkshops(Available_Workshops* ptr)
// Returns the maximum number of workshops the student can attend—without overlap.
// The next workshop cannot be attended until the previous workshop ends.
//
// Define the structs Workshops and Available_Workshops.
// mplement the functions initialize and CalculateMaxWorkshops
//

struct Workshop {
    int startTime;
    int duration;
    int endTime;        
};

struct Available_Workshops {
    int n;
    std::vector<Workshop> w;
};

bool compareWorkshops(Workshop a, Workshop b){
    return(a.endTime<b.endTime);
}

Available_Workshops* initialize(int start_t[],int dur[],int n){
    Available_Workshops* aw = new Available_Workshops;
    aw->n=n;
    std::vector<Workshop> w_vector;
    for(int i=0;i<n;i++){
        Workshop w;
        w.startTime=start_t[i];
        w.duration=dur[i];
        w.endTime=start_t[i]+dur[i];
        w_vector.push_back(w);
    }
    sort(w_vector.begin(), w_vector.end(),compareWorkshops);
    aw->w=w_vector;
    return aw;
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    int end_time=-1;
    int counter=0;
    for(std::vector<Workshop>::iterator it = ptr->w.begin();it!=ptr->w.end(); ++it){
        if(end_time<=it->endTime && it->startTime>=end_time){
            end_time=it->endTime;
            counter++;
        }
    }
    return counter;
}

