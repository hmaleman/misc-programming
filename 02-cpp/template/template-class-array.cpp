//header file for main.cpp

#include<iostream>

using namespace std;

const int SIZE = 5;
template <class T>
class StudentRecord
{
    private:
        const int size = SIZE;
        T grades[SIZE];
        int studentId;
    public:
        StudentRecord(T defaultInput);//A default constructor with a default value
        void setGrades(T* input);
        void setId(int idIn);
        void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T defaultInput)
{
    #if 0
    for(int i=0; i<size; i++)
    {
        grades[i] = defaultInput;
    }
    #endif
    //TODO: allocate memory for the array
    //by assigning a default value to each
    //array element.
}


template<class T>
void StudentRecord<T>::setGrades(T* input)
{
    for(int i=0; i<SIZE;++i)
    {
        grades[i] = input[i];
    }
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    std::cout<<"ID# "<<studentId<<": ";
    for(int i=0;i<SIZE;++i)
        std::cout<<grades[i]<<"\n ";
    std::cout<<"\n";
}

/* main */
/*Goal: study generic classes
**Fix the program by completing
**the constructor. It should 
**assign a default value to each
**element in the array.*/

int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(-1);//add a default value using a constructor
    srInt.setId(111111);
    int arrayInt[SIZE]={4,3,2,1,4};
    srInt.setGrades(arrayInt);
    srInt.printGrades();
 
    StudentRecord<char> srChar('U');//add a default value using a constructor
    srChar.setId(222222);
    char arrayChar[SIZE]={'A','B','C','D','F'};
    srChar.setGrades(arrayChar);
    srChar.printGrades();
   
    StudentRecord<float> srFloat(-1.0);//add a default value using a constructor
    srFloat.setId(333333);
    float arrayFloat[SIZE]={2.75,4.0,3.7,2.8,3.99};
    srFloat.setGrades(arrayFloat);
    srFloat.printGrades();
    
    StudentRecord<string> srString("U");//add a default value using a constructor
    srString.setId(4444);
    string arrayString[SIZE]={"B","B-","C+","B","A"};
    srString.setGrades(arrayString);
    srString.printGrades();
    
    return 0;
}

