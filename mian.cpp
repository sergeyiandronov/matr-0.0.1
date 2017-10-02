#include <iostream>
#include <sstream>

using namespace std;
int main() {
int matrix[3][3];
    int matrix1[3][3];

    bool failure = false;
char com;
  while(!failure){
     for (int j = 0; j < 3; j++) {
         for (std::string string; std::getline(std::cin, string);) {

             std::istringstream stream(string);


             for (int i = 0; i < 3; ++i) {
                 if (!(stream >> matrix[i][j])) {
                     failure = true;
                     break;
                 }
             }

             break;


         }
         if (failure){
             break;}
     }
     if (failure){
         break;
     }

     for (std::string string; std::getline(std::cin, string);) {

         std::istringstream stream(string);


         if (!(stream >> com)) {
             failure = true;
             break;
         }

         break;


     }
      if (failure){
          break;
      }
     for (int j = 0; j < 3; j++) {
         for (std::string string; std::getline(std::cin, string);) {

             std::istringstream stream(string);


             for (int i = 0; i < 3; ++i) {
                 if (!(stream >> matrix1[i][j])) {
                     failure = true;
                     break;
                 }
             }
             break;


         }  if (failure){
             break;}
     }

     break;
 }

    if( !failure ) {
        switch(com){
            case '+':
                for (int j = 0; j < 3; ++j){
                    for (int i = 0; i < 3; ++i) {
                        matrix[i][j]=matrix[i][j]+matrix1[i][j];
                    }}
                break;
            case '-':
                for (int j = 0; j < 3; ++j){
                    for (int i = 0; i < 3; ++i) {
                        matrix[i][j]=matrix[i][j]-matrix1[i][j];
                    }}
                break;
            case '*':
                int mat[3][3];
                for (int j = 0; j < 3; ++j){
                    for (int i = 0; i < 3; ++i) {
                        mat[i][j]=matrix[i][j];
                    }}
                for (int j = 0; j < 3; ++j){
                    for (int i = 0; i < 3; ++i) {
                        matrix[i][j]=mat[i][0]*matrix1[0][j]+mat[i][1]*matrix1[1][j]+mat[i][2]*matrix1[2][j];
                    }}
                break;

        }

        for (int j = 0; j < 3; ++j){
            for (int i = 0; i < 3; ++i) {
                cout<< matrix[i][j]<< " ";
            }cout<<"\n";}
    }
    else {
        std::cout << "An error has occured while reading numbers from line" << std::endl;
    }



            return 0;


    }

