#include "student.h" 

using namespace std;

Student :: Student(int id, string name, double cpluse, double amath, double cenglish): ID(id), Name(name), CPluseScore(cpluse), AMathScore(amath), CEngScore(cenglish) {}
void Student::max()
{
        if (CEngScore >= AMathScore && CEngScore >= CPluseScore) maxScore = CEngScore;
        else if (AMathScore >= CEngScore && AMathScore >= CPluseScore) maxScore = AMathScore;
        else  maxScore = CPluseScore;
}
void Student::avg()
{
        avgScore = (CEngScore + AMathScore + CPluseScore) / 3;
}
double Student::getMaxScore() const
{
    return maxScore;
}
double Student::getAverageScore() const
{
    return avgScore;
}