#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
std::string timeConversion(std::string s)
{
    std::string strhour = s.substr(0, 2);
    std::stringstream ss(strhour);
    int hour;
    ss >> hour;
    if (s[8] == 'P')
    {
        if (hour != 12)
            hour += 12;
    }
    else
    {
        if (hour == 12)
            hour = 0;
    }
    strhour = (hour < 10) ? "0" + std::to_string(hour) : std::to_string(hour);
    s.replace(0, 2, strhour);
    return s.substr(0, s.length() - 2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
