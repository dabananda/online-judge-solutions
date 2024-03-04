// Author: Dabananda Mitra
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string fileName;
  std::string authorInfo = "// Author: Dabananda Mitra\n";

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
