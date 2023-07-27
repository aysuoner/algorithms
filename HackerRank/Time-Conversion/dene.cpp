#include <string>
#include <iostream>
#include <sstream>

void timeConversion(std::string s)
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
    // Saati 2 haneli string haline getiriyoruz
    strhour = (hour < 10) ? "0" + std::to_string(hour) : std::to_string(hour);

    // Yeni saat değerini eski stringin yerine koyup geri döndürüyoruz
    s.replace(0, 2, strhour);
    // 'AM' ve 'PM' kısmını çıkarıp geri kalanını döndürüyoruz
	s = s.substr(0, s.length() - 2);
	std::cout << s << std::endl;
}

int main()
{
	std::string s;
	s = "01:05:45AM";
    timeConversion(s);
	return 0;
}