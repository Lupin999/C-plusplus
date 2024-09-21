// Online C++ compiler of a grading system
//author:joel
#include <iostream>
int main() {
    int math,english,kiswahili;
    std::cout << "Enter math:";
    std::cin>>math;
    std::cout<<"enter english:";
    std::cin>>english;
    std::cout<<"enter kiswahili:";
    std::cin>>kiswahili;
  int average = (math + english + kiswahili) / 3;
   std::cout << "Average score: " << average << std::endl;
    char grade;
    switch (average/5){
       case 5:
            grade = 'A';
            break;
        case 4:
            grade = 'B';
            break;
        case 3:
            grade = 'C';
            break;
        case 2:
            grade = 'D';
            break;
             case 1:
            grade = 'F';
            break;
        default:
            grade = 'E'; 
            break;
    }
 std::cout << "Grade: " << grade << std::endl;
    return 0;
}