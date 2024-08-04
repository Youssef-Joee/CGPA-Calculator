#include <iostream>
using namespace std;

void menu(int &groupnum)
{
    cout << "*********************************************************** \n";
    cout << "                       Calculate CGPA                       \n";
    cout << "*********************************************************** \n";
    cout << "Group[1] : take 17 hours in the frist semster and 18 hours in the second. \n";
    cout << "Group[2] : take 18 hours in the frist semster and 17 hours in the second. \n";
    cout << "Please enter the number of your Group (1) or (2) ? \n";
    cin >> groupnum;
    while (groupnum != 1 && groupnum !=2)
    {
        cout << "Group number can be (1) or (2) only !! \n";
        cout << "please enter groub number again \n";
        cin >> groupnum;
    }

}

void inputgpa(float &gpa1 , float &gpa2)
{
    cout << "Please enter your GPA in the Frist semster ? \n";
    cin >> gpa1;
    while (gpa1<0 || gpa1>4)
    {
        cout << "GPA must be from (0) to (4) please enter the correct GPA ?\n";
        cin >> gpa1;

    }
    cout << "Please enter your GPA in the Second semster ? \n";
    cin >> gpa2;
    while (gpa2 < 0 || gpa2>4)
    {
        cout << "GPA must be from (0) to (4) please enter the correct GPA ?\n";
        cin >> gpa2;

    }

}

float Calculategpa(int groubnum, float gpa1, float gpa2)
{
    float Avg_Gpa;

    if (groubnum == 1)
    {
        Avg_Gpa = (gpa1 * 17 + gpa2 * 18) / 35;

    }
    else if (groubnum == 2)
    {
        Avg_Gpa = (gpa1 * 18 + gpa2 * 17) / 35;
    }


    return  Avg_Gpa;

}

void grade(float gpa)
{
    if (gpa == 4)
    {
        cout << " A  ||  Exellent";
    }
    else if (gpa >= 3.7 && gpa < 4)
    {
        cout << " A-  ||  Exellent";
    }
    else if (gpa >= 3.3 && gpa < 3.7)
    {
        cout << " B+  ||  Very Good";
    }
    else if (gpa >= 3 && gpa < 3.3)
    {
        cout << " B   ||  Very Good";
    }
    else if (gpa >= 2.7 && gpa < 3)
    {
        cout << " B-   ||   Good";
    }
    else if (gpa >= 2.7 && gpa < 3)
    {
        cout << " B-   ||   Good";
    }
    else if (gpa >= 2.3 && gpa < 2.7)
    {
        cout << " C+   ||   Good";
    }
    else if (gpa >= 2 && gpa < 2.3)
    {
        cout << " C   ||   satisfactory";
    }
    else if (gpa >= 1.7 && gpa < 2)
    {
        cout << " C-   ||   satisfactory";
    }
    else if (gpa >= 1.3 && gpa < 1.7)
    {
        cout << " D+   ||   satisfactory";
    }
    else if (gpa >= 1 && gpa < 1.3)
    {
        cout << " D   ||   satisfactory";
    }
    else if (gpa < 1)
    {
        cout << " F   ||   Fail";
    }


}


int main()
{
    int groubnum;
    float gpa1, gpa2;
    menu(groubnum);
    inputgpa(gpa1, gpa2);
    float CGPA = Calculategpa(groubnum, gpa1, gpa2);
    cout << "Your CGPA is: " << CGPA << endl ;
    cout << "Your Grade is: ";
    grade(CGPA);
    cout << endl;
     

    return 0;
}
