#include <iostream>
#include <stdexcept>

class BadHour : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid hour: must be between 0 and 2359";
    }
};

class BadSeconds : public std::exception {
public:
    const char* what() const noexcept override {
        return "Invalid seconds: must be between 0 and 59";
    }
};

class MilTime {
private:
    int mil_hours;
    int mil_seconds;
public:
    MilTime(int hours, int seconds) {
        if (hours < 0 || hours > 2359) {
            throw BadHour();
        }
        if (seconds < 0 || seconds > 59) {
            throw BadSeconds();
        }
        mil_hours = hours;
        mil_seconds = seconds;
    }
    int get_hours() const {
        return mil_hours;
    }
    std::pair<int, std::string> get_stand_hours() const {
        if (mil_hours == 0) {
            return {12, "AM"};
        } else if (mil_hours < 1200) {
            return {mil_hours / 100, "AM"};
        } else if (mil_hours == 1200) {
            return {12, "PM"};
        } else {
            return {mil_hours / 100 - 12, "PM"};
        }
    }
    int get_seconds() const {
        return mil_seconds;
    }
};

int main() {
    
    try {
        MilTime mt(2460, 30);
    } catch (const BadHour& e) {
        std::cout << "Caught BadHour exception: " << e.what() << '\n';
    } catch (const BadSeconds& e) {
        std::cout << "Caught BadSeconds exception: " << e.what() << '\n';
    } catch (...) {
        std::cout << "Caught unknown exception\n";
    }
    
    try {
        MilTime mt(1230, 70);
    } catch (const BadHour& e) {
        std::cout << "Caught BadHour exception: " << e.what() << '\n';
    } catch (const BadSeconds& e) {
        std::cout << "Caught BadSeconds exception: " << e.what() << '\n';
    } catch (...) {
        std::cout << "Caught unknown exception\n";
    }
    
    MilTime mt(930, 45);
    std::cout << "Hours: " << mt.get_hours() << '\n';
    auto [hours, am_pm] = mt.get_stand_hours();
    std::cout << "Standard hours: " << hours << " " << am_pm << '\n';
    std::cout << "Seconds: " << mt.get_seconds() << '\n';
    
    return 0;
}