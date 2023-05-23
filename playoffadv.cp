//
//  main.cpp
//  playoffadv
//
//  Created by Matthew Sahota on 2023-05-11.
//
// An odds calculator for a best-of-7 playoff series (e.g: NHL, NBA, MLB)
//

#include <iostream>
using namespace std;

void odds(float h, float a, char adv, string record) {
    cout << "Team Record: " << record << "\n";
    if (tolower(adv) == 'h') {
        cout << "Home/Away: Home \n";
        if (record == "0-0") {
            float sweep = pow(h*a,2);
            float fivegame = 2*((1-h)*pow(h*a,2)+(1-a)*pow(h,3)*a);
            float sixgame = 3*pow(1-h,2)*h*pow(a,3)+6*(1-h)*(1-a)*pow(h*a,2)+pow(1-a,2)*a*pow(h,3);
            float sevengame = pow(a*(1-h),3)*h+9*(1-a)*pow(h*a*(1-h),2)+9*(1-h)*a*pow(h,3)*pow(1-a,2) + pow(1-a,3)*pow(h,4);
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-0") {
            float sweep = h*a*a;
            float fivegame = (1-h)*a*a + 2*(1-a)*a*h;
            float sixgame = pow(1-h,2)*pow(a,3)+4*(1-h)*(1-a)*h*pow(a,2)+pow((1-a)*h,2)*a;
            float sevengame = 3*pow((1-h)*a,2)*(1-a)*h + 6*(1-h)*pow(h*(1-a),2)*a + pow(h*(1-a),3);
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-0") {
            float sweep = a*a;
            float fivegame = 2*(1-a)*a*h;
            float sixgame = 2*(1-h)*(1-a)*a*a + 2*pow(1-a,2)*a*h;
            float sevengame = pow(1-a,3)*h*h+3*(1-h)*pow(1-a,2)*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-0") {
            float sweep = a;
            float fivegame = (1-a)*h;
            float sixgame = (1-a)*(1-h)*a;
            float sevengame = (1-a)*(1-h)*(1-a)*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "0-1") {
            float sweep = 0;
            float fivegame = pow(h*a,2);
            float sixgame = 2*(1-a)*pow(h*a,2)+2*h*(1-h)*pow(a,3);
            float sevengame = 3*pow((1-a)*h,2)*a*h+6*(1-a)*(1-h)*a*a*h*h+pow(1-h,2)*pow(a,3)*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-1") {
            float sweep = 0;
            float fivegame = a*a*h;
            float sixgame = (1-a)*h*a*a+(1-h)*a*a*a;
            float sevengame = 3*pow((1-a)*h,2)*a+3*(1-a)*(1-h)*a*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-1") {
            float sweep = 0;
            float fivegame = a*h;
            float sixgame = (1-a)*h*a+(1-h)*a*a;
            float sevengame = pow((1-a)*h,2)+2*(1-a)*(1-h)*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-1") {
            float sweep = 0;
            float fivegame = h;
            float sixgame = (1-h)*a;
            float sevengame = (1-h)*(1-a)*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "0-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a*a*a*h;
            float sevengame = 3*(1-a)*a*a*h*h+(1-h)*a*a*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a*a*h;
            float sevengame = 2*(1-a)*a*h*h+(1-h)*a*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a*h;
            float sevengame = (1-a)*h*h+(1-h)*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a;
            float sevengame = (1-a)*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "0-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a*a*h*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a*h*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
    }
    else if (tolower(adv) == 'a') {
        cout << "Home/Away: Away \n";
        if (record == "0-0") {
            float sweep = pow(h*a,2);
            float fivegame = 2*((1-a)*pow(h*a,2)+(1-h)*pow(a,3)*h);
            float sixgame = 3*pow(1-a,2)*a*pow(h,3)+6*(1-a)*(1-h)*pow(h*a,2)+pow(1-h,2)*a*pow(a,3);
            float sevengame = pow(h*(1-a),3)*a+9*(1-h)*pow(h*a*(1-a),2)+9*(1-a)*h*pow(a,3)*pow(1-h,2) + pow(1-h,3)*pow(a,4);
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-0") {
            float sweep = h*h*a;
            float fivegame = (1-a)*h*h + 2*(1-h)*a*h;
            float sixgame = pow(1-a,2)*pow(h,3)+4*(1-h)*(1-a)*a*pow(h,2)+pow((1-h)*a,2)*h;
            float sevengame = 3*pow((1-a)*h,2)*(1-h)*a + 6*(1-a)*pow(a*(1-h),2)*h + pow(a*(1-h),3);
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-0") {
            float sweep = h*h;
            float fivegame = 2*(1-h)*a*h;
            float sixgame = 2*(1-h)*(1-a)*h*h + 2*pow(1-h,2)*a*h;
            float sevengame = pow(1-h,3)*a*a+3*(1-a)*pow(1-h,2)*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-0") {
            float sweep = h;
            float fivegame = (1-h)*a;
            float sixgame = (1-a)*(1-h)*h;
            float sevengame = (1-a)*(1-h)*(1-h)*a;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "0-1") {
            float sweep = 0;
            float fivegame = pow(h*a,2);
            float sixgame = 2*(1-h)*pow(h*a,2)+2*a*(1-a)*pow(h,3);
            float sevengame = 3*pow((1-h)*a,2)*a*h+6*(1-a)*(1-h)*a*a*h*h+pow(1-a,2)*pow(h,3)*a;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-1") {
            float sweep = 0;
            float fivegame = a*h*h;
            float sixgame = (1-h)*h*h*a+(1-a)*h*h*h;
            float sevengame = 3*pow((1-h)*a,2)*h+3*(1-a)*(1-h)*h*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-1") {
            float sweep = 0;
            float fivegame = a*h;
            float sixgame = (1-h)*h*a+(1-a)*h*h;
            float sevengame = pow((1-h)*a,2)+2*(1-a)*(1-h)*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-1") {
            float sweep = 0;
            float fivegame = a;
            float sixgame = (1-a)*h;
            float sevengame = (1-h)*(1-a)*a;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "0-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a*h*h*h;
            float sevengame = 3*(1-h)*a*a*h*h+(1-a)*a*h*h*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a*h*h;
            float sevengame = 2*(1-h)*a*a*h+(1-a)*a*h*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = a*h;
            float sevengame = (1-h)*a*a+(1-a)*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-2") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = h;
            float sevengame = (1-h)*a;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "0-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a*a*h*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "1-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a*a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "2-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a*h;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
        else if (record == "3-3") {
            float sweep = 0;
            float fivegame = 0;
            float sixgame = 0;
            float sevengame = a;
            float wprob = sweep+fivegame+sixgame+sevengame;
            float lprob = 1-wprob;
            cout << "Chance to Sweep Series: " << 100*sweep << "% \n";
            cout << "Chance to Win Series in Five Games: " << 100*fivegame << "% \n";
            cout << "Chance to Win Series in Six Games: " << 100*sixgame << "% \n";
            cout << "Chance to Win Series in Seven Games: " << 100*sevengame << "% \n";
            cout << "Overall Chance to Win Series: " << 100*wprob << "% \n";
            cout << "Overall Chance to Lose Series: " << 100*lprob << "% \n";
        }
    }
}

int main(int argc, const char * argv[]) {
    
    char homeaway;
    string rec;
    float homewin;
    float awaywin;
    
    cout << "Is your team home or away? (h/a) ";
    cin >> homeaway;
    cout << "What is your team's record? (win-loss, all less than 4) ";
    cin >> rec;
    cout << "Enter your team's chance of winning at home (must be between 0 and 1) ";
    cin >> homewin;
    cout << "Enter your team's chance of winning when away (must be between 0 and 1) ";
    cin >> awaywin ;
    cout << "\n";
    odds(homewin,awaywin,homeaway,rec);
    return 0;
}
