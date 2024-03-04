/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Education: Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
Time & Date: 2024-03-04 15:09:25 (Dhaka, Bangladesh)
*/
#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

std::string getCurrentDateTime() {
  time_t now = time(0);
  struct tm* localTime = localtime(&now);

  char buffer[80];
  strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);

  return buffer;
}

int main() {
  std::string fileName;\
  std::string authorInfo =
      "/*\n"
      "Author: Dabananda Mitra\n"
      "Email: imdmitra@gmail.com\n"
      "GitHub: https://github.com/dabananda\n"
      "LinkedIn: https://www.linkedin.com/in/dabanandamitra/\n"
      "Education: Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)\n"
      "Time & Date: " +
      getCurrentDateTime() +
      " (Dhaka, Bangladesh)\n"
      "*/\n";

  // Input file name
  std::cout << "Enter the file name: ";
  std::getline(std::cin, fileName);

  // Open the file
  std::ifstream inputFile(fileName);
  if (!inputFile.is_open()) {
    std::cerr << "Error opening file: " << fileName << std::endl;
    return 1;
  }

  // Read the content of the file
  std::stringstream buffer;
  buffer << inputFile.rdbuf();
  std::string fileContent = buffer.str();

  // Add author information at the beginning
  fileContent = authorInfo + fileContent;

  // Close the input file
  inputFile.close();

  // Open the file for writing
  std::ofstream outputFile(fileName);
  if (!outputFile.is_open()) {
    std::cerr << "Error opening file for writing: " << fileName << std::endl;
    return 1;
  }

  // Write the modified content to the file
  outputFile << fileContent;

  // Close the output file
  outputFile.close();

  // Commit and push to GitHub
  std::string commitMessage;
  std::cout << "Enter the commit message: ";
  std::getline(std::cin, commitMessage);

  std::string command = "git add " + fileName + " && git commit -m \"" + commitMessage + "\" && git push";
  system(command.c_str());

  std::cout << "Changes committed and pushed to GitHub successfully." << std::endl;

  return 0;
}
