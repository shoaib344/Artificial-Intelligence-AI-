// #include <iostream>
// #include <sstream>
// #include <functional>
// #include <cstdlib>
// #include <ctime>

// std::pair<int, int> SelectUNGoals(int student_id) {
//     // Perform a hash calculation on the student ID
//     std::stringstream ss;
//     ss << student_id;
//     std::hash<std::string> hasher;
//     size_t hashed_id = hasher(ss.str());

//     // Map the hashed ID to two numbers between 1 and 17
//     int goal1 = static_cast<int>((hashed_id % 17) + 1);
//     int goal2 = static_cast<int>(((hashed_id / 17) % 17) + 1);

//     // Handle edge cases
//     if (goal1 == goal2 || goal1 < 1 || goal1 > 17 || goal2 < 1 || goal2 > 17) {
//         // Generate random valid goals as a fallback
//         goal1 = static_cast<int>((hashed_id % 15) + 1);
//         goal2 = static_cast<int>(((hashed_id / 15) % 15) + 2);
//     }

//     return std::make_pair(goal1, goal2);
// }

// int main() {
//     // Seed for random number generation
//     std::srand(static_cast<unsigned>(std::time(nullptr)));

//     // Example usage
//     int student_id = 123456;
//     std::pair<int, int> selected_goals = SelectUNGoals(student_id);

//     std::cout << "Selected UN Goals: " << selected_goals.first << " and " << selected_goals.second << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// #include <string>
// using namespace std;
// pair<int, int> SelectUNGoals() {
//     // Seed the random number generator with the current time
//     srand(time(nullptr));

//     // Generate two random numbers between 1 and 17
//     int number1 = (rand() % 17) + 1;
//     int number2 = (rand() % 17) + 1;

//     // Check and make sure the two numbers are different
//     while (number1 == number2) {
//         number2 = (rand() % 17) + 1;
//     }

//     return make_pair(number1, number2);
// }

// int main() {
//     // Array of Sustainable Development Goals
//     string goals[17] = {
//         "No Poverty",
//         "Zero Hunger",
//         "Good Health and Well-Being",
//         "Quality Education",
//         "Gender Equality",
//         "Clean Water and Sanitation",
//         "Affordable and Clean Energy",
//         "Decent Work and Economic Growth",
//         "Industry, Innovation, and Infrastructure",
//         "Reduced Inequalities",
//         "Sustainable Cities and Communities",
//         "Responsible Consumption and Production",
//         "Climate Action",
//         "Life Below Water",
//         "Life on Land",
//         "Peace, Justice and Strong Institutions",
//         "Partnerships"
//     };

//     pair<int, int> selectedGoals = SelectUNGoals();
   
//     cout << "Selected Goals:" << endl;
//     cout << "Goal " << selectedGoals.first << ": " << goals[selectedGoals.first - 1] << endl;
//     cout << "Goal " << selectedGoals.second << ": " << goals[selectedGoals.second - 1] << endl;

//     return 0;
// 

// #include <iostream>
// #include <string>

// std::string mergeStrings(const std::string& s1, const std::string& s2) {
//     std::string result;
//     size_t i = 0, j = 0;

//     while (i < s1.length() && j < s2.length()) {
//         result += s1[i];
//         result += s2[j];
//         i++;
//         j++;
//     }

//     // Append the remaining characters from the longer string
//     result += s1.substr(i) + s2.substr(j);

//     return result;
// }

// int main() {
//     // Example 1
//     std::string s1 = "day";
//     std::string s2 = "time";
//     std::string result = mergeStrings(s1, s2);
//     std::cout << result << std::endl;  // Output: "dtaiyme"

//     return 0;
// }



